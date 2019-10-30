/* ModelButton.c generated by valac 0.40.11, the Vala compiler
 * generated from ModelButton.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>


#define WIDGETS_TYPE_MODEL_BUTTON (widgets_model_button_get_type ())
#define WIDGETS_MODEL_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WIDGETS_TYPE_MODEL_BUTTON, WidgetsModelButton))
#define WIDGETS_MODEL_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WIDGETS_TYPE_MODEL_BUTTON, WidgetsModelButtonClass))
#define WIDGETS_IS_MODEL_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WIDGETS_TYPE_MODEL_BUTTON))
#define WIDGETS_IS_MODEL_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WIDGETS_TYPE_MODEL_BUTTON))
#define WIDGETS_MODEL_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WIDGETS_TYPE_MODEL_BUTTON, WidgetsModelButtonClass))

typedef struct _WidgetsModelButton WidgetsModelButton;
typedef struct _WidgetsModelButtonClass WidgetsModelButtonClass;
typedef struct _WidgetsModelButtonPrivate WidgetsModelButtonPrivate;
enum  {
	WIDGETS_MODEL_BUTTON_0_PROPERTY,
	WIDGETS_MODEL_BUTTON_ICON_PROPERTY,
	WIDGETS_MODEL_BUTTON_TOOLTIP_PROPERTY,
	WIDGETS_MODEL_BUTTON_TEXT_PROPERTY,
	WIDGETS_MODEL_BUTTON_NUM_PROPERTIES
};
static GParamSpec* widgets_model_button_properties[WIDGETS_MODEL_BUTTON_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _WidgetsModelButton {
	GtkButton parent_instance;
	WidgetsModelButtonPrivate * priv;
};

struct _WidgetsModelButtonClass {
	GtkButtonClass parent_class;
};

struct _WidgetsModelButtonPrivate {
	GtkLabel* _label;
	GtkImage* _image;
};


static gpointer widgets_model_button_parent_class = NULL;

GType widgets_model_button_get_type (void) G_GNUC_CONST;
#define WIDGETS_MODEL_BUTTON_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), WIDGETS_TYPE_MODEL_BUTTON, WidgetsModelButtonPrivate))
WidgetsModelButton* widgets_model_button_new (const gchar* text,
                                              const gchar* icon,
                                              const gchar* tooltip);
WidgetsModelButton* widgets_model_button_construct (GType object_type,
                                                    const gchar* text,
                                                    const gchar* icon,
                                                    const gchar* tooltip);
void widgets_model_button_set_icon (WidgetsModelButton* self,
                                    const gchar* value);
void widgets_model_button_set_tooltip (WidgetsModelButton* self,
                                       const gchar* value);
void widgets_model_button_set_text (WidgetsModelButton* self,
                                    const gchar* value);
static GObject * widgets_model_button_constructor (GType type,
                                            guint n_construct_properties,
                                            GObjectConstructParam * construct_properties);
static void widgets_model_button_finalize (GObject * obj);
static void _vala_widgets_model_button_set_property (GObject * object,
                                              guint property_id,
                                              const GValue * value,
                                              GParamSpec * pspec);


WidgetsModelButton*
widgets_model_button_construct (GType object_type,
                                const gchar* text,
                                const gchar* icon,
                                const gchar* tooltip)
{
	WidgetsModelButton * self = NULL;
	g_return_val_if_fail (text != NULL, NULL);
	g_return_val_if_fail (icon != NULL, NULL);
	g_return_val_if_fail (tooltip != NULL, NULL);
	self = (WidgetsModelButton*) g_object_new (object_type, "icon", icon, "text", text, "tooltip", tooltip, "expand", TRUE, NULL);
	return self;
}


WidgetsModelButton*
widgets_model_button_new (const gchar* text,
                          const gchar* icon,
                          const gchar* tooltip)
{
	return widgets_model_button_construct (WIDGETS_TYPE_MODEL_BUTTON, text, icon, tooltip);
}


void
widgets_model_button_set_icon (WidgetsModelButton* self,
                               const gchar* value)
{
	GtkImage* _tmp0_;
	GThemedIcon* _tmp1_;
	GThemedIcon* _tmp2_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->_image;
	_tmp1_ = (GThemedIcon*) g_themed_icon_new (value);
	_tmp2_ = _tmp1_;
	g_object_set (_tmp0_, "gicon", (GIcon*) _tmp2_, NULL);
	_g_object_unref0 (_tmp2_);
	g_object_notify_by_pspec ((GObject *) self, widgets_model_button_properties[WIDGETS_MODEL_BUTTON_ICON_PROPERTY]);
}


void
widgets_model_button_set_tooltip (WidgetsModelButton* self,
                                  const gchar* value)
{
	g_return_if_fail (self != NULL);
	gtk_widget_set_tooltip_text ((GtkWidget*) self, value);
	g_object_notify_by_pspec ((GObject *) self, widgets_model_button_properties[WIDGETS_MODEL_BUTTON_TOOLTIP_PROPERTY]);
}


void
widgets_model_button_set_text (WidgetsModelButton* self,
                               const gchar* value)
{
	GtkLabel* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->_label;
	gtk_label_set_label (_tmp0_, value);
	g_object_notify_by_pspec ((GObject *) self, widgets_model_button_properties[WIDGETS_MODEL_BUTTON_TEXT_PROPERTY]);
}


static GObject *
widgets_model_button_constructor (GType type,
                                  guint n_construct_properties,
                                  GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	WidgetsModelButton * self;
	GtkStyleContext* _tmp0_;
	GtkStyleContext* _tmp1_;
	GtkLabel* _tmp2_;
	GtkImage* _tmp3_;
	GtkImage* _tmp4_;
	GtkGrid* grid = NULL;
	GtkGrid* _tmp5_;
	GtkGrid* _tmp6_;
	GtkGrid* _tmp7_;
	GtkImage* _tmp8_;
	GtkGrid* _tmp9_;
	GtkLabel* _tmp10_;
	GtkGrid* _tmp11_;
	parent_class = G_OBJECT_CLASS (widgets_model_button_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, WIDGETS_TYPE_MODEL_BUTTON, WidgetsModelButton);
	gtk_widget_set_can_focus ((GtkWidget*) self, FALSE);
	_tmp0_ = gtk_widget_get_style_context ((GtkWidget*) self);
	gtk_style_context_add_class (_tmp0_, "menuitem");
	_tmp1_ = gtk_widget_get_style_context ((GtkWidget*) self);
	gtk_style_context_add_class (_tmp1_, "flat");
	_tmp2_ = (GtkLabel*) gtk_label_new (NULL);
	g_object_ref_sink (_tmp2_);
	_g_object_unref0 (self->priv->_label);
	self->priv->_label = _tmp2_;
	_tmp3_ = (GtkImage*) gtk_image_new ();
	g_object_ref_sink (_tmp3_);
	_g_object_unref0 (self->priv->_image);
	self->priv->_image = _tmp3_;
	_tmp4_ = self->priv->_image;
	gtk_image_set_pixel_size (_tmp4_, 16);
	_tmp5_ = (GtkGrid*) gtk_grid_new ();
	g_object_ref_sink (_tmp5_);
	grid = _tmp5_;
	_tmp6_ = grid;
	gtk_grid_set_column_spacing (_tmp6_, 6);
	_tmp7_ = grid;
	_tmp8_ = self->priv->_image;
	gtk_container_add ((GtkContainer*) _tmp7_, (GtkWidget*) _tmp8_);
	_tmp9_ = grid;
	_tmp10_ = self->priv->_label;
	gtk_container_add ((GtkContainer*) _tmp9_, (GtkWidget*) _tmp10_);
	_tmp11_ = grid;
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp11_);
	_g_object_unref0 (grid);
	return obj;
}


static void
widgets_model_button_class_init (WidgetsModelButtonClass * klass)
{
	widgets_model_button_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (WidgetsModelButtonPrivate));
	G_OBJECT_CLASS (klass)->set_property = _vala_widgets_model_button_set_property;
	G_OBJECT_CLASS (klass)->constructor = widgets_model_button_constructor;
	G_OBJECT_CLASS (klass)->finalize = widgets_model_button_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), WIDGETS_MODEL_BUTTON_ICON_PROPERTY, widgets_model_button_properties[WIDGETS_MODEL_BUTTON_ICON_PROPERTY] = g_param_spec_string ("icon", "icon", "icon", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), WIDGETS_MODEL_BUTTON_TOOLTIP_PROPERTY, widgets_model_button_properties[WIDGETS_MODEL_BUTTON_TOOLTIP_PROPERTY] = g_param_spec_string ("tooltip", "tooltip", "tooltip", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), WIDGETS_MODEL_BUTTON_TEXT_PROPERTY, widgets_model_button_properties[WIDGETS_MODEL_BUTTON_TEXT_PROPERTY] = g_param_spec_string ("text", "text", "text", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE));
}


static void
widgets_model_button_instance_init (WidgetsModelButton * self)
{
	self->priv = WIDGETS_MODEL_BUTTON_GET_PRIVATE (self);
}


static void
widgets_model_button_finalize (GObject * obj)
{
	WidgetsModelButton * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, WIDGETS_TYPE_MODEL_BUTTON, WidgetsModelButton);
	_g_object_unref0 (self->priv->_label);
	_g_object_unref0 (self->priv->_image);
	G_OBJECT_CLASS (widgets_model_button_parent_class)->finalize (obj);
}


GType
widgets_model_button_get_type (void)
{
	static volatile gsize widgets_model_button_type_id__volatile = 0;
	if (g_once_init_enter (&widgets_model_button_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (WidgetsModelButtonClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) widgets_model_button_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (WidgetsModelButton), 0, (GInstanceInitFunc) widgets_model_button_instance_init, NULL };
		GType widgets_model_button_type_id;
		widgets_model_button_type_id = g_type_register_static (gtk_button_get_type (), "WidgetsModelButton", &g_define_type_info, 0);
		g_once_init_leave (&widgets_model_button_type_id__volatile, widgets_model_button_type_id);
	}
	return widgets_model_button_type_id__volatile;
}


static void
_vala_widgets_model_button_set_property (GObject * object,
                                         guint property_id,
                                         const GValue * value,
                                         GParamSpec * pspec)
{
	WidgetsModelButton * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, WIDGETS_TYPE_MODEL_BUTTON, WidgetsModelButton);
	switch (property_id) {
		case WIDGETS_MODEL_BUTTON_ICON_PROPERTY:
		widgets_model_button_set_icon (self, g_value_get_string (value));
		break;
		case WIDGETS_MODEL_BUTTON_TOOLTIP_PROPERTY:
		widgets_model_button_set_tooltip (self, g_value_get_string (value));
		break;
		case WIDGETS_MODEL_BUTTON_TEXT_PROPERTY:
		widgets_model_button_set_text (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


