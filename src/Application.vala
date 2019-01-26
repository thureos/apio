public class Apio : Gtk.Application {
    private MainWindow main_window = null;

    public Apio () {
        Object (
            application_id: "com.github.thureos.apio",
            flags: ApplicationFlags.FLAGS_NONE
        );
    }

    protected override void activate () {
        if (main_window == null) {
            main_window = new MainWindow ();
            add_window (main_window);
            main_window.show_all ();
        } else {
            main_window.present ();
        }
    }

    public static int main (string[] args) {
        var app = new Apio ();
        return app.run (args);
    }
}