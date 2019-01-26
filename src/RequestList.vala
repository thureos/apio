public class RequestList : Granite.Widgets.SourceList {
    
    //  private string[] dummy_categories = ["Category 1"]

    public RequestList(){
        var ackbar_collection = new Granite.Widgets.SourceList.ExpandableItem ("STARWARS");

        var get_ships_item = new Granite.Widgets.SourceList.Item ("GET - Ships");

        ackbar_collection.add (get_ships_item);

        var root = this.root;

        root.add(ackbar_collection);
    }

    public void Build(){
        
    }
}