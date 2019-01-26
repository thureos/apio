/* MainWindow.c generated by valac 0.40.13, the Vala compiler
 * generated from MainWindow.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <granite.h>


#define TYPE_MAIN_WINDOW (main_window_get_type ())
#define MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MAIN_WINDOW, MainWindow))
#define MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MAIN_WINDOW, MainWindowClass))
#define IS_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MAIN_WINDOW))
#define IS_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MAIN_WINDOW))
#define MAIN_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MAIN_WINDOW, MainWindowClass))

typedef struct _MainWindow MainWindow;
typedef struct _MainWindowClass MainWindowClass;
typedef struct _MainWindowPrivate MainWindowPrivate;

#define TYPE_REQUEST_LIST (request_list_get_type ())
#define REQUEST_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_REQUEST_LIST, RequestList))
#define REQUEST_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_REQUEST_LIST, RequestListClass))
#define IS_REQUEST_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_REQUEST_LIST))
#define IS_REQUEST_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_REQUEST_LIST))
#define REQUEST_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_REQUEST_LIST, RequestListClass))

typedef struct _RequestList RequestList;
typedef struct _RequestListClass RequestListClass;
enum  {
	MAIN_WINDOW_0_PROPERTY,
	MAIN_WINDOW_NUM_PROPERTIES
};
static GParamSpec* main_window_properties[MAIN_WINDOW_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _MainWindow {
	GtkWindow parent_instance;
	MainWindowPrivate * priv;
};

struct _MainWindowClass {
	GtkWindowClass parent_class;
};

struct _MainWindowPrivate {
	RequestList* request_list;
};


static gpointer main_window_parent_class = NULL;

GType main_window_get_type (void) G_GNUC_CONST;
GType request_list_get_type (void) G_GNUC_CONST;
#define MAIN_WINDOW_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_MAIN_WINDOW, MainWindowPrivate))
MainWindow* main_window_new (void);
MainWindow* main_window_construct (GType object_type);
RequestList* request_list_new (void);
RequestList* request_list_construct (GType object_type);
static void main_window_finalize (GObject * obj);


MainWindow*
main_window_construct (GType object_type)
{
	MainWindow * self = NULL;
	RequestList* _tmp0_;
	RequestList* _tmp1_;
#line 5 "/home/thureos/Projects/apio/src/MainWindow.vala"
	self = (MainWindow*) g_object_new (object_type, NULL);
#line 6 "/home/thureos/Projects/apio/src/MainWindow.vala"
	g_object_set ((GtkWindow*) self, "default-width", 1000, NULL);
#line 7 "/home/thureos/Projects/apio/src/MainWindow.vala"
	g_object_set ((GtkWindow*) self, "default-height", 600, NULL);
#line 8 "/home/thureos/Projects/apio/src/MainWindow.vala"
	gtk_window_set_title ((GtkWindow*) self, "Apio - Rest API Client");
#line 10 "/home/thureos/Projects/apio/src/MainWindow.vala"
	_tmp0_ = request_list_new ();
#line 10 "/home/thureos/Projects/apio/src/MainWindow.vala"
	g_object_ref_sink (_tmp0_);
#line 10 "/home/thureos/Projects/apio/src/MainWindow.vala"
	_g_object_unref0 (self->priv->request_list);
#line 10 "/home/thureos/Projects/apio/src/MainWindow.vala"
	self->priv->request_list = _tmp0_;
#line 11 "/home/thureos/Projects/apio/src/MainWindow.vala"
	_tmp1_ = self->priv->request_list;
#line 11 "/home/thureos/Projects/apio/src/MainWindow.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp1_);
#line 5 "/home/thureos/Projects/apio/src/MainWindow.vala"
	return self;
#line 94 "MainWindow.c"
}


MainWindow*
main_window_new (void)
{
#line 5 "/home/thureos/Projects/apio/src/MainWindow.vala"
	return main_window_construct (TYPE_MAIN_WINDOW);
#line 103 "MainWindow.c"
}


static void
main_window_class_init (MainWindowClass * klass)
{
#line 1 "/home/thureos/Projects/apio/src/MainWindow.vala"
	main_window_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/thureos/Projects/apio/src/MainWindow.vala"
	g_type_class_add_private (klass, sizeof (MainWindowPrivate));
#line 1 "/home/thureos/Projects/apio/src/MainWindow.vala"
	G_OBJECT_CLASS (klass)->finalize = main_window_finalize;
#line 116 "MainWindow.c"
}


static void
main_window_instance_init (MainWindow * self)
{
#line 1 "/home/thureos/Projects/apio/src/MainWindow.vala"
	self->priv = MAIN_WINDOW_GET_PRIVATE (self);
#line 125 "MainWindow.c"
}


static void
main_window_finalize (GObject * obj)
{
	MainWindow * self;
#line 1 "/home/thureos/Projects/apio/src/MainWindow.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_MAIN_WINDOW, MainWindow);
#line 3 "/home/thureos/Projects/apio/src/MainWindow.vala"
	_g_object_unref0 (self->priv->request_list);
#line 1 "/home/thureos/Projects/apio/src/MainWindow.vala"
	G_OBJECT_CLASS (main_window_parent_class)->finalize (obj);
#line 139 "MainWindow.c"
}


GType
main_window_get_type (void)
{
	static volatile gsize main_window_type_id__volatile = 0;
	if (g_once_init_enter (&main_window_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (MainWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) main_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (MainWindow), 0, (GInstanceInitFunc) main_window_instance_init, NULL };
		GType main_window_type_id;
		main_window_type_id = g_type_register_static (gtk_window_get_type (), "MainWindow", &g_define_type_info, 0);
		g_once_init_leave (&main_window_type_id__volatile, main_window_type_id);
	}
	return main_window_type_id__volatile;
}



