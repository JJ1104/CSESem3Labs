function wisher(){
    var message = "Happy Birthday !";
    let date = new Date();
    let hh = date.getHours();
    let mm = date.getMinutes();
    let ss = date.getSeconds();

    
    if(mm == 0 && ss == 0){
        alert(message);
    }
    
    document.getElementById("wish");
    let t = setTimeout(function(){wisher()},500);
}

wisher();l
