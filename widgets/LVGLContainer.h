#ifndef LVGLCONTAINER_H
#define LVGLCONTAINER_H

#include "LVGLWidget.h"

class LVGLContainer : public LVGLWidget
{
public:
	LVGLContainer();

	QString name() const;
	QString className() const;
	virtual Type type() const;
	QPixmap preview() const;
	QIcon icon() const;
	QSize minimumSize() const;
	lv_obj_t *newObject(lv_obj_t *parent) const;
	virtual QStringList styles() const;
	virtual lv_style_t *style(lv_obj_t *obj, int type) const;
	virtual void setStyle(lv_obj_t *obj, int type, lv_style_t *style) const;
	virtual lv_style_t *defaultStyle(int type) const;

};

#endif // LVGLCONTAINER_H
