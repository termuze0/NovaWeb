#include <gtk/gtk.h>

GtkWidget* create_browser_window();

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    GtkWidget *window = create_browser_window();

    gtk_main();
    return 0;
}
