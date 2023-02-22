var can = document.getElementById("myc");
var b = document.getElementById("blue");
can.style.position = 'absolute';
b.style.position = 'absolute';


var ctx = can.getContext("2d");
var bctx = b.getContext("2d");


function drawredbox(){
    ctx.fillStyle = "red"
    ctx.fillRect(0,0,140,160);
}

function drawbluebox(){
    bctx.translate(50,10);
    bctx.fillStyle = "blue";
    bctx.rotate(30*Math.PI/180);
    bctx.fillRect(0,0,140,160);
}

drawredbox();
drawbluebox();
