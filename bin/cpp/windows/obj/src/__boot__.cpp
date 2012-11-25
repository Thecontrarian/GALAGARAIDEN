#include <hxcpp.h>

#include <sys/io/FileSeek.h>
#include <sys/io/FileOutput.h>
#include <sys/io/FileInput.h>
#include <sys/io/File.h>
#include <sys/FileSystem.h>
#include <sys/_FileSystem/FileKind.h>
#include <nme/installer/Assets.h>
#include <nme/Lib.h>
#include <neash/utils/WeakRef.h>
#include <neash/utils/Endian.h>
#include <neash/utils/CompressionAlgorithm.h>
#include <neash/utils/ByteArray.h>
#include <neash/utils/IDataInput.h>
#include <neash/utils/IMemoryRange.h>
#include <neash/ui/Keyboard.h>
#include <neash/text/TextFormatAlign.h>
#include <neash/text/TextFormat.h>
#include <neash/text/TextFieldType.h>
#include <neash/text/TextFieldAutoSize.h>
#include <neash/text/TextField.h>
#include <neash/text/FontType.h>
#include <neash/text/FontStyle.h>
#include <neash/text/Font.h>
#include <neash/text/AntiAliasType.h>
#include <neash/system/System.h>
#include <neash/net/URLVariables.h>
#include <neash/net/URLRequestMethod.h>
#include <neash/net/URLRequestHeader.h>
#include <neash/net/URLRequest.h>
#include <neash/net/URLLoaderDataFormat.h>
#include <neash/net/URLLoader.h>
#include <neash/media/SoundLoaderContext.h>
#include <neash/media/SoundChannel.h>
#include <neash/media/Sound.h>
#include <neash/media/ID3Info.h>
#include <neash/geom/Transform.h>
#include <neash/geom/ColorTransform.h>
#include <neash/filters/BitmapFilter.h>
#include <neash/events/SampleDataEvent.h>
#include <neash/events/ProgressEvent.h>
#include <neash/events/KeyboardEvent.h>
#include <neash/events/JoystickEvent.h>
#include <neash/events/IOErrorEvent.h>
#include <neash/events/HTTPStatusEvent.h>
#include <neash/events/FocusEvent.h>
#include <neash/events/EventPhase.h>
#include <neash/events/Listener.h>
#include <neash/events/ErrorEvent.h>
#include <neash/events/TextEvent.h>
#include <neash/errors/RangeError.h>
#include <neash/errors/EOFError.h>
#include <neash/errors/ArgumentError.h>
#include <neash/errors/Error.h>
#include <neash/display/TriangleCulling.h>
#include <neash/display/Tilesheet.h>
#include <neash/display/StageScaleMode.h>
#include <neash/display/StageQuality.h>
#include <neash/display/StageDisplayState.h>
#include <neash/display/StageAlign.h>
#include <neash/display/TouchInfo.h>
#include <neash/display/SpreadMethod.h>
#include <neash/display/PixelSnapping.h>
#include <neash/display/MovieClip.h>
#include <neash/display/ManagedStage.h>
#include <neash/display/Stage.h>
#include <neash/events/TouchEvent.h>
#include <neash/events/MouseEvent.h>
#include <neash/events/Event.h>
#include <neash/display/LineScaleMode.h>
#include <neash/display/JointStyle.h>
#include <neash/display/InterpolationMethod.h>
#include <neash/display/IGraphicsData.h>
#include <neash/display/GraphicsPathWinding.h>
#include <neash/display/Graphics.h>
#include <neash/display/GradientType.h>
#include <neash/display/CapsStyle.h>
#include <neash/display/BlendMode.h>
#include <neash/display/OptimizedPerlin.h>
#include <neash/display/BitmapData.h>
#include <neash/display/Bitmap.h>
#include <neash/Lib.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/Timer.h>
#include <haxe/Log.h>
#include <cpp/zip/Uncompress.h>
#include <cpp/zip/Flush.h>
#include <cpp/zip/Compress.h>
#include <cpp/vm/Gc.h>
#include <com/haxepunk/utils/Key.h>
#include <com/haxepunk/utils/Joystick.h>
#include <com/haxepunk/utils/Input.h>
#include <com/haxepunk/utils/Ease.h>
#include <com/haxepunk/utils/Draw.h>
#include <com/haxepunk/tweens/misc/MultiVarTween.h>
#include <com/haxepunk/masks/Polygon.h>
#include <com/haxepunk/math/Projection.h>
#include <com/haxepunk/math/Vector.h>
#include <com/haxepunk/masks/Pixelmask.h>
#include <com/haxepunk/masks/Masklist.h>
#include <com/haxepunk/masks/Grid.h>
#include <com/haxepunk/masks/Hitbox.h>
#include <com/haxepunk/masks/Circle.h>
#include <com/haxepunk/graphics/Text.h>
#include <com/haxepunk/graphics/Image.h>
#include <com/haxepunk/graphics/Graphiclist.h>
#include <com/haxepunk/debug/Console.h>
#include <com/haxepunk/Tween.h>
#include <com/haxepunk/TweenType.h>
#include <com/haxepunk/Screen.h>
#include <com/haxepunk/Mask.h>
#include <com/haxepunk/HXP.h>
#include <neash/geom/Rectangle.h>
#include <neash/geom/Matrix.h>
#include <cpp/rtti/FieldNumericIntegerLookup.h>
#include <neash/geom/Point.h>
#include <com/haxepunk/World.h>
#include <neash/media/SoundTransform.h>
#include <com/haxepunk/Graphic.h>
#include <com/haxepunk/Entity.h>
#include <com/haxepunk/Tweener.h>
#include <com/gitjam/Main.h>
#include <com/haxepunk/Engine.h>
#include <neash/display/Sprite.h>
#include <neash/display/DisplayObjectContainer.h>
#include <neash/display/InteractiveObject.h>
#include <neash/display/DisplayObject.h>
#include <sys/io/_Process/Stdout.h>
#include <haxe/io/Input.h>
#include <haxe/io/Bytes.h>
#include <sys/io/_Process/Stdin.h>
#include <haxe/io/Output.h>
#include <sys/io/Process.h>
#include <neash/Loader.h>
#include <neash/display/IBitmapDrawable.h>
#include <neash/events/EventDispatcher.h>
#include <neash/events/IEventDispatcher.h>
#include <Type.h>
#include <ValueType.h>
#include <Sys.h>
#include <cpp/Lib.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Std.h>
#include <Reflect.h>
#include <List.h>
#include <Lambda.h>
#include <IntIter.h>
#include <IntHash.h>
#include <Hash.h>
#include <Date.h>
#include <ApplicationMain.h>

void __boot_all()
{
hx::RegisterResources( hx::GetResources() );
::sys::io::FileSeek_obj::__register();
::sys::io::FileOutput_obj::__register();
::sys::io::FileInput_obj::__register();
::sys::io::File_obj::__register();
::sys::FileSystem_obj::__register();
::sys::_FileSystem::FileKind_obj::__register();
::nme::installer::Assets_obj::__register();
::nme::Lib_obj::__register();
::neash::utils::WeakRef_obj::__register();
::neash::utils::Endian_obj::__register();
::neash::utils::CompressionAlgorithm_obj::__register();
::neash::utils::ByteArray_obj::__register();
::neash::utils::IDataInput_obj::__register();
::neash::utils::IMemoryRange_obj::__register();
::neash::ui::Keyboard_obj::__register();
::neash::text::TextFormatAlign_obj::__register();
::neash::text::TextFormat_obj::__register();
::neash::text::TextFieldType_obj::__register();
::neash::text::TextFieldAutoSize_obj::__register();
::neash::text::TextField_obj::__register();
::neash::text::FontType_obj::__register();
::neash::text::FontStyle_obj::__register();
::neash::text::Font_obj::__register();
::neash::text::AntiAliasType_obj::__register();
::neash::system::System_obj::__register();
::neash::net::URLVariables_obj::__register();
::neash::net::URLRequestMethod_obj::__register();
::neash::net::URLRequestHeader_obj::__register();
::neash::net::URLRequest_obj::__register();
::neash::net::URLLoaderDataFormat_obj::__register();
::neash::net::URLLoader_obj::__register();
::neash::media::SoundLoaderContext_obj::__register();
::neash::media::SoundChannel_obj::__register();
::neash::media::Sound_obj::__register();
::neash::media::ID3Info_obj::__register();
::neash::geom::Transform_obj::__register();
::neash::geom::ColorTransform_obj::__register();
::neash::filters::BitmapFilter_obj::__register();
::neash::events::SampleDataEvent_obj::__register();
::neash::events::ProgressEvent_obj::__register();
::neash::events::KeyboardEvent_obj::__register();
::neash::events::JoystickEvent_obj::__register();
::neash::events::IOErrorEvent_obj::__register();
::neash::events::HTTPStatusEvent_obj::__register();
::neash::events::FocusEvent_obj::__register();
::neash::events::EventPhase_obj::__register();
::neash::events::Listener_obj::__register();
::neash::events::ErrorEvent_obj::__register();
::neash::events::TextEvent_obj::__register();
::neash::errors::RangeError_obj::__register();
::neash::errors::EOFError_obj::__register();
::neash::errors::ArgumentError_obj::__register();
::neash::errors::Error_obj::__register();
::neash::display::TriangleCulling_obj::__register();
::neash::display::Tilesheet_obj::__register();
::neash::display::StageScaleMode_obj::__register();
::neash::display::StageQuality_obj::__register();
::neash::display::StageDisplayState_obj::__register();
::neash::display::StageAlign_obj::__register();
::neash::display::TouchInfo_obj::__register();
::neash::display::SpreadMethod_obj::__register();
::neash::display::PixelSnapping_obj::__register();
::neash::display::MovieClip_obj::__register();
::neash::display::ManagedStage_obj::__register();
::neash::display::Stage_obj::__register();
::neash::events::TouchEvent_obj::__register();
::neash::events::MouseEvent_obj::__register();
::neash::events::Event_obj::__register();
::neash::display::LineScaleMode_obj::__register();
::neash::display::JointStyle_obj::__register();
::neash::display::InterpolationMethod_obj::__register();
::neash::display::IGraphicsData_obj::__register();
::neash::display::GraphicsPathWinding_obj::__register();
::neash::display::Graphics_obj::__register();
::neash::display::GradientType_obj::__register();
::neash::display::CapsStyle_obj::__register();
::neash::display::BlendMode_obj::__register();
::neash::display::OptimizedPerlin_obj::__register();
::neash::display::BitmapData_obj::__register();
::neash::display::Bitmap_obj::__register();
::neash::Lib_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Log_obj::__register();
::cpp::zip::Uncompress_obj::__register();
::cpp::zip::Flush_obj::__register();
::cpp::zip::Compress_obj::__register();
::cpp::vm::Gc_obj::__register();
::com::haxepunk::utils::Key_obj::__register();
::com::haxepunk::utils::Joystick_obj::__register();
::com::haxepunk::utils::Input_obj::__register();
::com::haxepunk::utils::Ease_obj::__register();
::com::haxepunk::utils::Draw_obj::__register();
::com::haxepunk::tweens::misc::MultiVarTween_obj::__register();
::com::haxepunk::masks::Polygon_obj::__register();
::com::haxepunk::math::Projection_obj::__register();
::com::haxepunk::math::Vector_obj::__register();
::com::haxepunk::masks::Pixelmask_obj::__register();
::com::haxepunk::masks::Masklist_obj::__register();
::com::haxepunk::masks::Grid_obj::__register();
::com::haxepunk::masks::Hitbox_obj::__register();
::com::haxepunk::masks::Circle_obj::__register();
::com::haxepunk::graphics::Text_obj::__register();
::com::haxepunk::graphics::Image_obj::__register();
::com::haxepunk::graphics::Graphiclist_obj::__register();
::com::haxepunk::debug::Console_obj::__register();
::com::haxepunk::Tween_obj::__register();
::com::haxepunk::TweenType_obj::__register();
::com::haxepunk::Screen_obj::__register();
::com::haxepunk::Mask_obj::__register();
::com::haxepunk::HXP_obj::__register();
::neash::geom::Rectangle_obj::__register();
::neash::geom::Matrix_obj::__register();
::cpp::rtti::FieldNumericIntegerLookup_obj::__register();
::neash::geom::Point_obj::__register();
::com::haxepunk::World_obj::__register();
::neash::media::SoundTransform_obj::__register();
::com::haxepunk::Graphic_obj::__register();
::com::haxepunk::Entity_obj::__register();
::com::haxepunk::Tweener_obj::__register();
::com::gitjam::Main_obj::__register();
::com::haxepunk::Engine_obj::__register();
::neash::display::Sprite_obj::__register();
::neash::display::DisplayObjectContainer_obj::__register();
::neash::display::InteractiveObject_obj::__register();
::neash::display::DisplayObject_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Bytes_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::haxe::io::Output_obj::__register();
::sys::io::Process_obj::__register();
::neash::Loader_obj::__register();
::neash::display::IBitmapDrawable_obj::__register();
::neash::events::EventDispatcher_obj::__register();
::neash::events::IEventDispatcher_obj::__register();
::Type_obj::__register();
::ValueType_obj::__register();
::Sys_obj::__register();
::cpp::Lib_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Std_obj::__register();
::Reflect_obj::__register();
::List_obj::__register();
::Lambda_obj::__register();
::IntIter_obj::__register();
::IntHash_obj::__register();
::Hash_obj::__register();
::Date_obj::__register();
::ApplicationMain_obj::__register();
::neash::utils::ByteArray_obj::__init__();
::cpp::Lib_obj::__boot();
::cpp::rtti::FieldNumericIntegerLookup_obj::__boot();
::cpp::vm::Gc_obj::__boot();
::cpp::zip::Compress_obj::__boot();
::cpp::zip::Flush_obj::__boot();
::cpp::zip::Uncompress_obj::__boot();
::haxe::Log_obj::__boot();
::ApplicationMain_obj::__boot();
::Date_obj::__boot();
::Hash_obj::__boot();
::IntHash_obj::__boot();
::IntIter_obj::__boot();
::Lambda_obj::__boot();
::List_obj::__boot();
::Reflect_obj::__boot();
::Std_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::Sys_obj::__boot();
::ValueType_obj::__boot();
::Type_obj::__boot();
::neash::events::IEventDispatcher_obj::__boot();
::neash::events::EventDispatcher_obj::__boot();
::neash::display::IBitmapDrawable_obj::__boot();
::neash::Loader_obj::__boot();
::sys::io::Process_obj::__boot();
::haxe::io::Output_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::Input_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::neash::display::DisplayObject_obj::__boot();
::neash::display::InteractiveObject_obj::__boot();
::neash::display::DisplayObjectContainer_obj::__boot();
::neash::display::Sprite_obj::__boot();
::com::haxepunk::Engine_obj::__boot();
::com::gitjam::Main_obj::__boot();
::com::haxepunk::Tweener_obj::__boot();
::com::haxepunk::Entity_obj::__boot();
::com::haxepunk::Graphic_obj::__boot();
::neash::media::SoundTransform_obj::__boot();
::com::haxepunk::World_obj::__boot();
::neash::geom::Point_obj::__boot();
::neash::geom::Matrix_obj::__boot();
::neash::geom::Rectangle_obj::__boot();
::com::haxepunk::HXP_obj::__boot();
::com::haxepunk::Mask_obj::__boot();
::com::haxepunk::Screen_obj::__boot();
::com::haxepunk::TweenType_obj::__boot();
::com::haxepunk::Tween_obj::__boot();
::com::haxepunk::debug::Console_obj::__boot();
::com::haxepunk::graphics::Graphiclist_obj::__boot();
::com::haxepunk::graphics::Image_obj::__boot();
::com::haxepunk::graphics::Text_obj::__boot();
::com::haxepunk::masks::Circle_obj::__boot();
::com::haxepunk::masks::Hitbox_obj::__boot();
::com::haxepunk::masks::Grid_obj::__boot();
::com::haxepunk::masks::Masklist_obj::__boot();
::com::haxepunk::masks::Pixelmask_obj::__boot();
::com::haxepunk::math::Vector_obj::__boot();
::com::haxepunk::math::Projection_obj::__boot();
::com::haxepunk::masks::Polygon_obj::__boot();
::com::haxepunk::tweens::misc::MultiVarTween_obj::__boot();
::com::haxepunk::utils::Draw_obj::__boot();
::com::haxepunk::utils::Ease_obj::__boot();
::com::haxepunk::utils::Input_obj::__boot();
::com::haxepunk::utils::Joystick_obj::__boot();
::com::haxepunk::utils::Key_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::neash::Lib_obj::__boot();
::neash::display::Bitmap_obj::__boot();
::neash::display::BitmapData_obj::__boot();
::neash::display::OptimizedPerlin_obj::__boot();
::neash::display::BlendMode_obj::__boot();
::neash::display::CapsStyle_obj::__boot();
::neash::display::GradientType_obj::__boot();
::neash::display::Graphics_obj::__boot();
::neash::display::GraphicsPathWinding_obj::__boot();
::neash::display::IGraphicsData_obj::__boot();
::neash::display::InterpolationMethod_obj::__boot();
::neash::display::JointStyle_obj::__boot();
::neash::display::LineScaleMode_obj::__boot();
::neash::events::Event_obj::__boot();
::neash::events::MouseEvent_obj::__boot();
::neash::events::TouchEvent_obj::__boot();
::neash::display::Stage_obj::__boot();
::neash::display::ManagedStage_obj::__boot();
::neash::display::MovieClip_obj::__boot();
::neash::display::PixelSnapping_obj::__boot();
::neash::display::SpreadMethod_obj::__boot();
::neash::display::TouchInfo_obj::__boot();
::neash::display::StageAlign_obj::__boot();
::neash::display::StageDisplayState_obj::__boot();
::neash::display::StageQuality_obj::__boot();
::neash::display::StageScaleMode_obj::__boot();
::neash::display::Tilesheet_obj::__boot();
::neash::display::TriangleCulling_obj::__boot();
::neash::errors::Error_obj::__boot();
::neash::errors::ArgumentError_obj::__boot();
::neash::errors::EOFError_obj::__boot();
::neash::errors::RangeError_obj::__boot();
::neash::events::TextEvent_obj::__boot();
::neash::events::ErrorEvent_obj::__boot();
::neash::events::Listener_obj::__boot();
::neash::events::EventPhase_obj::__boot();
::neash::events::FocusEvent_obj::__boot();
::neash::events::HTTPStatusEvent_obj::__boot();
::neash::events::IOErrorEvent_obj::__boot();
::neash::events::JoystickEvent_obj::__boot();
::neash::events::KeyboardEvent_obj::__boot();
::neash::events::ProgressEvent_obj::__boot();
::neash::events::SampleDataEvent_obj::__boot();
::neash::filters::BitmapFilter_obj::__boot();
::neash::geom::ColorTransform_obj::__boot();
::neash::geom::Transform_obj::__boot();
::neash::media::ID3Info_obj::__boot();
::neash::media::Sound_obj::__boot();
::neash::media::SoundChannel_obj::__boot();
::neash::media::SoundLoaderContext_obj::__boot();
::neash::net::URLLoader_obj::__boot();
::neash::net::URLLoaderDataFormat_obj::__boot();
::neash::net::URLRequest_obj::__boot();
::neash::net::URLRequestHeader_obj::__boot();
::neash::net::URLRequestMethod_obj::__boot();
::neash::net::URLVariables_obj::__boot();
::neash::system::System_obj::__boot();
::neash::text::AntiAliasType_obj::__boot();
::neash::text::Font_obj::__boot();
::neash::text::FontStyle_obj::__boot();
::neash::text::FontType_obj::__boot();
::neash::text::TextField_obj::__boot();
::neash::text::TextFieldAutoSize_obj::__boot();
::neash::text::TextFieldType_obj::__boot();
::neash::text::TextFormat_obj::__boot();
::neash::text::TextFormatAlign_obj::__boot();
::neash::ui::Keyboard_obj::__boot();
::neash::utils::IMemoryRange_obj::__boot();
::neash::utils::IDataInput_obj::__boot();
::neash::utils::ByteArray_obj::__boot();
::neash::utils::CompressionAlgorithm_obj::__boot();
::neash::utils::Endian_obj::__boot();
::neash::utils::WeakRef_obj::__boot();
::nme::Lib_obj::__boot();
::nme::installer::Assets_obj::__boot();
::sys::_FileSystem::FileKind_obj::__boot();
::sys::FileSystem_obj::__boot();
::sys::io::File_obj::__boot();
::sys::io::FileInput_obj::__boot();
::sys::io::FileOutput_obj::__boot();
::sys::io::FileSeek_obj::__boot();
}

