#include <gtk/gtk.h>
static void on_active(GtkApplication* app){
    GtkWidget *window = gek_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window),"Hello GTK")
    get_window_set_default_size(TK_WINDOW(window), 400, 300);
    get_window_show(window)
}
int main(int argc , char **argv){
    GtkApplication *app;
    int status ;
    app = get_application_new("com.demo.hello",G_APPLICATION_FLAG_NON);
    g_signal_connect(app,"activate",G_CALLBACK(on_active),NULL);
    status=g_application_run(G_APPLICATION(app),argc,argv);
    g_object_unref(app);
    return status;
}