*{
margin:0;
padding:0;
box-sizing:border-box;
font-family:Arial, Helvetica, sans-serif;
}

html{
    scroll-behavior: smooth;
}

body{
background:#f4f4f4;
line-height:1.6;
color:#333;
}

/* Header */

header{
background:#003366;
color:white;
padding:20px;
}

.logo{
display:flex;
align-items:center;
gap:20px;
}

.logo img{
width:80px;
height:80px;
}

/* Navigation */

nav{
background:#00509e;
}

nav ul{
display:flex;
justify-content:center;
list-style:none;
}

nav ul li{
margin:15px;
}

nav ul li a{
color:white;
text-decoration:none;
font-weight:bold;
padding:10px 15px;
transition:0.3s;
}

nav ul li a:hover{
background:white;
color:#00509e;
border-radius:5px;
}

/* Banner */

.banner img{
width:100%;
height:350px;
object-fit:cover;
}

/* Main Layout */

main{
display:flex;
gap:20px;
padding:20px;
}

/* Content */

.content{
flex:3;
}

.content article{
background:white;
padding:20px;
margin-bottom:20px;
border-radius:10px;
box-shadow:0 0 10px rgba(0,0,0,.2);
}

/* Aside */

aside{
flex:1;
background:#ffffff;
padding:20px;
border-radius:10px;
box-shadow:0 0 10px rgba(0,0,0,.2);
}

aside ul{
margin-top:15px;
padding-left:20px;
}

/* Gallery */

.gallery{
display:grid;
grid-template-columns:repeat(4,1fr);
gap:20px;
padding:20px;
}

.card{
background:white;
padding:15px;
border-radius:10px;
text-align:center;
box-shadow:0 0 10px rgba(0,0,0,.2);
transition:0.3s;
}

.card:hover{
transform:scale(1.05);
}

.card img{
width:100%;
height:200px;
object-fit:cover;
border-radius:10px;
}

/* Footer */

footer{
background:#003366;
color:white;
text-align:center;
padding:20px;
margin-top:20px;
}

/* Tablet */

@media(max-width:992px){

main{
flex-direction:column;
}

.gallery{
grid-template-columns:repeat(2,1fr);
}

nav ul{
flex-wrap:wrap;
}

}

/* Mobile */

@media(max-width:600px){

.logo{
flex-direction:column;
text-align:center;
}

nav ul{
flex-direction:column;
align-items:center;
}

.banner img{
height:10px;
}

.gallery{
grid-template-columns:1fr;
}

}