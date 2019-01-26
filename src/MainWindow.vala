public class MainWindow : Gtk.Window {

    private RequestList request_list;
    
    public MainWindow(){
        this.default_width = 1000;
        this.default_height = 600;
        this.title = "Apio - Rest API Client";

        request_list = new RequestList ();
        this.add(request_list);
    }
}