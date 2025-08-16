#include <gtk/gtk.h>
#include <webkit2/webkit2.h>

GtkWidget* create_browser_window() {
    GtkWidget *window;
    GtkWidget *webview;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "NovaWeb");
    gtk_window_set_default_size(GTK_WINDOW(window), 1024, 768);

    webview = webkit_web_view_new();

    webkit_web_view_load_uri(WEBKIT_WEB_VIEW(webview), "https://duckduckgo.com");

    gtk_container_add(GTK_CONTAINER(window), webview);

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    gtk_widget_show_all(window);

    return window;
}
