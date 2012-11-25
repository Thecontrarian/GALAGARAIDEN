#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Grid
#include <com/haxepunk/masks/Grid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Pixelmask
#include <com/haxepunk/masks/Pixelmask.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_Graphics
#include <neash/display/Graphics.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
#ifndef INCLUDED_neash_geom_Rectangle
#include <neash/geom/Rectangle.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

Void Grid_obj::__construct(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_PUSH("Grid::new","com/haxepunk/masks/Grid.hx",33);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(34)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(37)
	if (((bool((bool((bool((width == (int)0)) || bool((height == (int)0)))) || bool((tileWidth == (int)0)))) || bool((tileHeight == (int)0))))){
		HX_STACK_LINE(38)
		hx::Throw (HX_CSTRING("Illegal Grid, sizes cannot be 0."));
	}
	HX_STACK_LINE(42)
	this->_rect = ::com::haxepunk::HXP_obj::rect;
	HX_STACK_LINE(43)
	this->_point = ::com::haxepunk::HXP_obj::point;
	HX_STACK_LINE(44)
	this->_point2 = ::com::haxepunk::HXP_obj::point2;
	HX_STACK_LINE(47)
	this->columns = ::Std_obj::_int((Float(width) / Float(tileWidth)));
	HX_STACK_LINE(48)
	this->rows = ::Std_obj::_int((Float(height) / Float(tileHeight)));
	HX_STACK_LINE(50)
	this->_tile = ::neash::geom::Rectangle_obj::__new((int)0,(int)0,tileWidth,tileHeight);
	HX_STACK_LINE(51)
	this->_x = x;
	HX_STACK_LINE(52)
	this->_y = y;
	HX_STACK_LINE(53)
	this->_width = width;
	HX_STACK_LINE(54)
	this->_height = height;
	HX_STACK_LINE(55)
	this->usePositions = false;
	HX_STACK_LINE(58)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >()),this->collideMask_dyn());
	HX_STACK_LINE(59)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >()),this->collideHitbox_dyn());
	HX_STACK_LINE(60)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Pixelmask >()),this->collidePixelmask_dyn());
	HX_STACK_LINE(62)
	this->data = Array_obj< Array< bool > >::__new();
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->rows;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		while(((_g1 < _g))){
			HX_STACK_LINE(63)
			int x1 = (_g1)++;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(65)
			this->data->push(Array_obj< bool >::__new());
		}
	}
}
;
	return null();
}

Grid_obj::~Grid_obj() { }

Dynamic Grid_obj::__CreateEmpty() { return  new Grid_obj; }
hx::ObjectPtr< Grid_obj > Grid_obj::__new(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< Grid_obj > result = new Grid_obj();
	result->__construct(width,height,tileWidth,tileHeight,__o_x,__o_y);
	return result;}

Dynamic Grid_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Grid_obj > result = new Grid_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Grid_obj::squareProjection( ::neash::geom::Point axis,::neash::geom::Point point){
{
		HX_STACK_PUSH("Grid::squareProjection","com/haxepunk/masks/Grid.hx",380);
		HX_STACK_THIS(this);
		HX_STACK_ARG(axis,"axis");
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(380)
		if (((axis->x < axis->y))){
			HX_STACK_LINE(383)
			point->x = axis->x;
			HX_STACK_LINE(384)
			point->y = axis->y;
		}
		else{
			HX_STACK_LINE(388)
			point->y = axis->x;
			HX_STACK_LINE(389)
			point->x = axis->y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,squareProjection,(void))

Void Grid_obj::debugDraw( ::neash::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_PUSH("Grid::debugDraw","com/haxepunk/masks/Grid.hx",338);
		HX_STACK_THIS(this);
		HX_STACK_ARG(graphics,"graphics");
		HX_STACK_ARG(scaleX,"scaleX");
		HX_STACK_ARG(scaleY,"scaleY");
		HX_STACK_LINE(339)
		::com::haxepunk::HXP_obj::point->x = ((this->_x + this->parent->x) - ::com::haxepunk::HXP_obj::camera->x);
		HX_STACK_LINE(340)
		::com::haxepunk::HXP_obj::point->y = ((this->_y + this->parent->y) - ::com::haxepunk::HXP_obj::camera->y);
		HX_STACK_LINE(341)
		int color = (int)-16776961;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(343)
		::com::haxepunk::HXP_obj::buffer->lock();
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->columns;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(344)
			while(((_g1 < _g))){
				HX_STACK_LINE(344)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(346)
				::com::haxepunk::HXP_obj::rect->x = (::com::haxepunk::HXP_obj::point->x + (i * ::Std_obj::_int(this->_tile->width)));
				HX_STACK_LINE(347)
				::com::haxepunk::HXP_obj::rect->y = ::com::haxepunk::HXP_obj::point->y;
				HX_STACK_LINE(348)
				::com::haxepunk::HXP_obj::rect->width = (int)1;
				HX_STACK_LINE(349)
				::com::haxepunk::HXP_obj::rect->height = this->_height;
				HX_STACK_LINE(350)
				::com::haxepunk::HXP_obj::buffer->fillRect(::com::haxepunk::HXP_obj::rect,color);
			}
		}
		HX_STACK_LINE(353)
		{
			HX_STACK_LINE(353)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->rows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(353)
			while(((_g1 < _g))){
				HX_STACK_LINE(353)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(355)
				::com::haxepunk::HXP_obj::rect->x = ::com::haxepunk::HXP_obj::point->x;
				HX_STACK_LINE(356)
				::com::haxepunk::HXP_obj::rect->y = (::com::haxepunk::HXP_obj::point->y + (i * ::Std_obj::_int(this->_tile->height)));
				HX_STACK_LINE(357)
				::com::haxepunk::HXP_obj::rect->width = this->_width;
				HX_STACK_LINE(358)
				::com::haxepunk::HXP_obj::rect->height = (int)1;
				HX_STACK_LINE(359)
				::com::haxepunk::HXP_obj::buffer->fillRect(::com::haxepunk::HXP_obj::rect,color);
			}
		}
		HX_STACK_LINE(362)
		::com::haxepunk::HXP_obj::rect->width = ::Std_obj::_int(this->_tile->width);
		HX_STACK_LINE(363)
		::com::haxepunk::HXP_obj::rect->height = ::Std_obj::_int(this->_tile->height);
		HX_STACK_LINE(364)
		{
			HX_STACK_LINE(364)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->rows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(364)
			while(((_g1 < _g))){
				HX_STACK_LINE(364)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(366)
				::com::haxepunk::HXP_obj::rect->y = (::com::haxepunk::HXP_obj::point->y + (y * ::Std_obj::_int(this->_tile->height)));
				HX_STACK_LINE(367)
				{
					HX_STACK_LINE(367)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->columns;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(367)
					while(((_g3 < _g2))){
						HX_STACK_LINE(367)
						int x = (_g3)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(369)
						::com::haxepunk::HXP_obj::rect->x = (::com::haxepunk::HXP_obj::point->x + (x * ::Std_obj::_int(this->_tile->width)));
						HX_STACK_LINE(370)
						if ((this->data->__get(y)->__get(x))){
							HX_STACK_LINE(371)
							::com::haxepunk::HXP_obj::buffer->fillRect(::com::haxepunk::HXP_obj::rect,color);
						}
					}
				}
			}
		}
		HX_STACK_LINE(376)
		::com::haxepunk::HXP_obj::buffer->unlock(null());
	}
return null();
}


bool Grid_obj::collidePixelmask( ::com::haxepunk::masks::Pixelmask other){
	HX_STACK_PUSH("Grid::collidePixelmask","com/haxepunk/masks/Grid.hx",290);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(332)
	::haxe::Log_obj::trace(HX_CSTRING("Pixelmasks will not work in targets other than flash due to hittest not being implemented in NME."),hx::SourceInfo(HX_CSTRING("Grid.hx"),332,HX_CSTRING("com.haxepunk.masks.Grid"),HX_CSTRING("collidePixelmask")));
	HX_STACK_LINE(334)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,collidePixelmask,return )

bool Grid_obj::collideHitbox( ::com::haxepunk::masks::Hitbox other){
	HX_STACK_PUSH("Grid::collideHitbox","com/haxepunk/masks/Grid.hx",266);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(267)
	int rectX;		HX_STACK_VAR(rectX,"rectX");
	int rectY;		HX_STACK_VAR(rectY,"rectY");
	int pointX;		HX_STACK_VAR(pointX,"pointX");
	int pointY;		HX_STACK_VAR(pointY,"pointY");
	HX_STACK_LINE(268)
	this->_rect->x = (((other->parent->x - other->_x) - this->parent->x) + this->_x);
	HX_STACK_LINE(269)
	this->_rect->y = (((other->parent->y - other->_y) - this->parent->y) + this->_y);
	HX_STACK_LINE(270)
	pointX = (::Std_obj::_int((Float((((this->_rect->x + other->_width) - (int)1))) / Float(this->_tile->width))) + (int)1);
	HX_STACK_LINE(271)
	pointY = (::Std_obj::_int((Float((((this->_rect->y + other->_height) - (int)1))) / Float(this->_tile->height))) + (int)1);
	HX_STACK_LINE(272)
	rectX = ::Std_obj::_int((Float(this->_rect->x) / Float(this->_tile->width)));
	HX_STACK_LINE(273)
	rectY = ::Std_obj::_int((Float(this->_rect->y) / Float(this->_tile->height)));
	HX_STACK_LINE(275)
	{
		HX_STACK_LINE(275)
		int _g = rectY;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(275)
		while(((_g < pointY))){
			HX_STACK_LINE(275)
			int dy = (_g)++;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(277)
			{
				HX_STACK_LINE(277)
				int _g1 = rectX;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(277)
				while(((_g1 < pointX))){
					HX_STACK_LINE(277)
					int dx = (_g1)++;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(279)
					if ((this->getTile(dx,dy))){
						HX_STACK_LINE(280)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(285)
	return false;
}


bool Grid_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_PUSH("Grid::collideMask","com/haxepunk/masks/Grid.hx",242);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(243)
	int rectX;		HX_STACK_VAR(rectX,"rectX");
	int rectY;		HX_STACK_VAR(rectY,"rectY");
	int pointX;		HX_STACK_VAR(pointX,"pointX");
	int pointY;		HX_STACK_VAR(pointY,"pointY");
	HX_STACK_LINE(244)
	this->_rect->x = (((other->parent->x - other->parent->originX) - this->parent->x) + this->parent->originX);
	HX_STACK_LINE(245)
	this->_rect->y = (((other->parent->y - other->parent->originY) - this->parent->y) + this->parent->originY);
	HX_STACK_LINE(246)
	pointX = (::Std_obj::_int((Float((((this->_rect->x + other->parent->width) - (int)1))) / Float(this->_tile->width))) + (int)1);
	HX_STACK_LINE(247)
	pointY = (::Std_obj::_int((Float((((this->_rect->y + other->parent->height) - (int)1))) / Float(this->_tile->height))) + (int)1);
	HX_STACK_LINE(248)
	rectX = ::Std_obj::_int((Float(this->_rect->x) / Float(this->_tile->width)));
	HX_STACK_LINE(249)
	rectY = ::Std_obj::_int((Float(this->_rect->y) / Float(this->_tile->height)));
	HX_STACK_LINE(251)
	{
		HX_STACK_LINE(251)
		int _g = rectY;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(251)
		while(((_g < pointY))){
			HX_STACK_LINE(251)
			int dy = (_g)++;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(253)
			{
				HX_STACK_LINE(253)
				int _g1 = rectX;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(253)
				while(((_g1 < pointX))){
					HX_STACK_LINE(253)
					int dx = (_g1)++;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(255)
					if ((this->getTile(dx,dy))){
						HX_STACK_LINE(256)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(261)
	return false;
}


int Grid_obj::getTileHeight( ){
	HX_STACK_PUSH("Grid::getTileHeight","com/haxepunk/masks/Grid.hx",223);
	HX_STACK_THIS(this);
	HX_STACK_LINE(223)
	return ::Std_obj::_int(this->_tile->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,getTileHeight,return )

int Grid_obj::getTileWidth( ){
	HX_STACK_PUSH("Grid::getTileWidth","com/haxepunk/masks/Grid.hx",217);
	HX_STACK_THIS(this);
	HX_STACK_LINE(217)
	return ::Std_obj::_int(this->_tile->width);
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,getTileWidth,return )

::String Grid_obj::saveToString( ::String __o_columnSep,::String __o_rowSep){
::String columnSep = __o_columnSep.Default(HX_CSTRING(","));
::String rowSep = __o_rowSep.Default(HX_CSTRING("\n"));
	HX_STACK_PUSH("Grid::saveToString","com/haxepunk/masks/Grid.hx",198);
	HX_STACK_THIS(this);
	HX_STACK_ARG(columnSep,"columnSep");
	HX_STACK_ARG(rowSep,"rowSep");
{
		HX_STACK_LINE(199)
		::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
		int x;		HX_STACK_VAR(x,"x");
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->rows;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(201)
			while(((_g1 < _g))){
				HX_STACK_LINE(201)
				int y1 = (_g1)++;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(203)
				{
					HX_STACK_LINE(203)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->columns;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(203)
					while(((_g3 < _g2))){
						HX_STACK_LINE(203)
						int x1 = (_g3)++;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(205)
						hx::AddEq(s,::Std_obj::string(this->getTile(x1,y1)));
						HX_STACK_LINE(206)
						if (((x1 != (this->columns - (int)1)))){
							HX_STACK_LINE(206)
							hx::AddEq(s,columnSep);
						}
					}
				}
				HX_STACK_LINE(208)
				if (((y1 != (this->rows - (int)1)))){
					HX_STACK_LINE(208)
					hx::AddEq(s,rowSep);
				}
			}
		}
		HX_STACK_LINE(210)
		return s;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,saveToString,return )

Void Grid_obj::loadFromString( ::String str,::String __o_columnSep,::String __o_rowSep){
::String columnSep = __o_columnSep.Default(HX_CSTRING(","));
::String rowSep = __o_rowSep.Default(HX_CSTRING("\n"));
	HX_STACK_PUSH("Grid::loadFromString","com/haxepunk/masks/Grid.hx",175);
	HX_STACK_THIS(this);
	HX_STACK_ARG(str,"str");
	HX_STACK_ARG(columnSep,"columnSep");
	HX_STACK_ARG(rowSep,"rowSep");
{
		HX_STACK_LINE(176)
		Array< ::String > row = str.split(rowSep);		HX_STACK_VAR(row,"row");
		int rows = row->length;		HX_STACK_VAR(rows,"rows");
		Array< ::String > col;		HX_STACK_VAR(col,"col");
		int cols;		HX_STACK_VAR(cols,"cols");
		int x;		HX_STACK_VAR(x,"x");
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(179)
			while(((_g < rows))){
				HX_STACK_LINE(179)
				int y1 = (_g)++;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(181)
				if (((row->__get(y1) == HX_CSTRING("")))){
					HX_STACK_LINE(181)
					continue;
				}
				HX_STACK_LINE(182)
				col = row->__get(y1).split(columnSep);
				HX_STACK_LINE(183)
				cols = col->length;
				HX_STACK_LINE(184)
				{
					HX_STACK_LINE(184)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(184)
					while(((_g1 < cols))){
						HX_STACK_LINE(184)
						int x1 = (_g1)++;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(186)
						if (((col->__get(x1) == HX_CSTRING("")))){
							HX_STACK_LINE(186)
							continue;
						}
						HX_STACK_LINE(187)
						this->setTile(x1,y1,(::Std_obj::parseInt(col->__get(x1)) > (int)0));
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Grid_obj,loadFromString,(void))

Void Grid_obj::clearRect( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
	HX_STACK_PUSH("Grid::clearRect","com/haxepunk/masks/Grid.hx",164);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
{
		HX_STACK_LINE(164)
		this->setRect(column,row,width,height,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Grid_obj,clearRect,(void))

Void Grid_obj::setRect( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< bool >  __o_solid){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
bool solid = __o_solid.Default(true);
	HX_STACK_PUSH("Grid::setRect","com/haxepunk/masks/Grid.hx",138);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(solid,"solid");
{
		HX_STACK_LINE(139)
		if ((this->usePositions)){
			HX_STACK_LINE(141)
			column = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));
			HX_STACK_LINE(142)
			row = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));
			HX_STACK_LINE(143)
			width = ::Std_obj::_int((Float(width) / Float(this->_tile->width)));
			HX_STACK_LINE(144)
			height = ::Std_obj::_int((Float(height) / Float(this->_tile->height)));
		}
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			int _g1 = row;		HX_STACK_VAR(_g1,"_g1");
			int _g = (row + height);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(147)
			while(((_g1 < _g))){
				HX_STACK_LINE(147)
				int yy = (_g1)++;		HX_STACK_VAR(yy,"yy");
				HX_STACK_LINE(149)
				{
					HX_STACK_LINE(149)
					int _g3 = column;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = (column + width);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(149)
					while(((_g3 < _g2))){
						HX_STACK_LINE(149)
						int xx = (_g3)++;		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(151)
						this->setTile(xx,yy,solid);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Grid_obj,setRect,(void))

bool Grid_obj::getTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_PUSH("Grid::getTile","com/haxepunk/masks/Grid.hx",118);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
{
		HX_STACK_LINE(119)
		if ((!(((  (((bool((bool((bool((column < (int)0)) || bool((column > (this->columns - (int)1))))) || bool((row < (int)0)))) || bool((row > (this->rows - (int)1)))))) ? bool(false) : bool(true) ))))){
			HX_STACK_LINE(119)
			return false;
		}
		HX_STACK_LINE(121)
		if ((this->usePositions)){
			HX_STACK_LINE(123)
			column = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));
			HX_STACK_LINE(124)
			row = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));
		}
		HX_STACK_LINE(126)
		return this->data->__get(row)->__get(column);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,getTile,return )

bool Grid_obj::checkTile( int column,int row){
	HX_STACK_PUSH("Grid::checkTile","com/haxepunk/masks/Grid.hx",98);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
	HX_STACK_LINE(98)
	if (((bool((bool((bool((column < (int)0)) || bool((column > (this->columns - (int)1))))) || bool((row < (int)0)))) || bool((row > (this->rows - (int)1)))))){
		HX_STACK_LINE(101)
		return false;
	}
	else{
		HX_STACK_LINE(106)
		return true;
	}
	HX_STACK_LINE(98)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,checkTile,return )

Void Grid_obj::clearTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_PUSH("Grid::clearTile","com/haxepunk/masks/Grid.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
{
		HX_STACK_LINE(93)
		this->setTile(column,row,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,clearTile,(void))

Void Grid_obj::setTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< bool >  __o_solid){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
bool solid = __o_solid.Default(true);
	HX_STACK_PUSH("Grid::setTile","com/haxepunk/masks/Grid.hx",76);
	HX_STACK_THIS(this);
	HX_STACK_ARG(column,"column");
	HX_STACK_ARG(row,"row");
	HX_STACK_ARG(solid,"solid");
{
		HX_STACK_LINE(77)
		if ((!(((  (((bool((bool((bool((column < (int)0)) || bool((column > (this->columns - (int)1))))) || bool((row < (int)0)))) || bool((row > (this->rows - (int)1)))))) ? bool(false) : bool(true) ))))){
			HX_STACK_LINE(77)
			return null();
		}
		HX_STACK_LINE(79)
		if ((this->usePositions)){
			HX_STACK_LINE(81)
			column = ::Std_obj::_int((Float(column) / Float(this->_tile->width)));
			HX_STACK_LINE(82)
			row = ::Std_obj::_int((Float(row) / Float(this->_tile->height)));
		}
		HX_STACK_LINE(84)
		this->data->__get(row)[column] = solid;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Grid_obj,setTile,(void))


Grid_obj::Grid_obj()
{
}

void Grid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Grid);
	HX_MARK_MEMBER_NAME(_point2,"_point2");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_tile,"_tile");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(usePositions,"usePositions");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Grid_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_point2,"_point2");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_tile,"_tile");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(usePositions,"usePositions");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Grid_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"_tile") ) { return _tile; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_point2") ) { return _point2; }
		if (HX_FIELD_EQ(inName,"columns") ) { return columns; }
		if (HX_FIELD_EQ(inName,"setRect") ) { return setRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return inCallProp ? getTileWidth() : tileWidth; }
		if (HX_FIELD_EQ(inName,"clearRect") ) { return clearRect_dyn(); }
		if (HX_FIELD_EQ(inName,"checkTile") ) { return checkTile_dyn(); }
		if (HX_FIELD_EQ(inName,"clearTile") ) { return clearTile_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return inCallProp ? getTileHeight() : tileHeight; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getTileWidth") ) { return getTileWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"saveToString") ) { return saveToString_dyn(); }
		if (HX_FIELD_EQ(inName,"usePositions") ) { return usePositions; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileHeight") ) { return getTileHeight_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadFromString") ) { return loadFromString_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"squareProjection") ) { return squareProjection_dyn(); }
		if (HX_FIELD_EQ(inName,"collidePixelmask") ) { return collidePixelmask_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Grid_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Array< Array< bool > > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::neash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile") ) { _tile=inValue.Cast< ::neash::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_point2") ) { _point2=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usePositions") ) { usePositions=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Grid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_point2"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_rect"));
	outFields->push(HX_CSTRING("_tile"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("rows"));
	outFields->push(HX_CSTRING("columns"));
	outFields->push(HX_CSTRING("tileHeight"));
	outFields->push(HX_CSTRING("tileWidth"));
	outFields->push(HX_CSTRING("usePositions"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_point2"),
	HX_CSTRING("_point"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_tile"),
	HX_CSTRING("squareProjection"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("collidePixelmask"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("data"),
	HX_CSTRING("rows"),
	HX_CSTRING("columns"),
	HX_CSTRING("getTileHeight"),
	HX_CSTRING("tileHeight"),
	HX_CSTRING("getTileWidth"),
	HX_CSTRING("tileWidth"),
	HX_CSTRING("saveToString"),
	HX_CSTRING("loadFromString"),
	HX_CSTRING("clearRect"),
	HX_CSTRING("setRect"),
	HX_CSTRING("getTile"),
	HX_CSTRING("checkTile"),
	HX_CSTRING("clearTile"),
	HX_CSTRING("setTile"),
	HX_CSTRING("usePositions"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
};

Class Grid_obj::__mClass;

void Grid_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Grid"), hx::TCanCast< Grid_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Grid_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
