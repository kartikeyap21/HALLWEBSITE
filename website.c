<!DOCTYPE html>
<html>
    <head>
        <title>Hall 12
        </title>
        <script>
            let slideIndex = 1;
showSlides(slideIndex);

// Next/previous controls
function plusSlides(n) {
  showSlides(slideIndex += n);
}

// Thumbnail image controls
function currentSlide(n) {
  showSlides(slideIndex = n);
}

function showSlides(n) {
  let i;
  let slides = document.getElementsByClassName("mySlides");
  let dots = document.getElementsByClassName("dot");
  if (n > slides.length) {slideIndex = 1}
  if (n < 1) {slideIndex = slides.length}
  for (i = 0; i < slides.length; i++) {
    slides[i].style.display = "none";
  }
  for (i = 0; i < dots.length; i++) {
    dots[i].className = dots[i].className.replace(" active", "");
  }
  slides[slideIndex-1].style.display = "block";
  dots[slideIndex-1].className += " active";
} 
        </script>
        <style>
            body{
                background-color:black;
            }
            nav{
                background-color: rgb(174, 206, 43);                
            }
            nav ul{
               list-style-type: none;

            }
            nav li{
                color:black;
                text-align:center;
                float:left;
                font-family:'Gill Sans', 'Gill Sans MT', Calibri, 'Trebuchet MS', sans-serif;
                width:150px;
                box-sizing:border-box;
            }
            .cont{
                display:flex;
                flex-direction:row;
            }
            .box1{
                width:70vw;
                box-sizing:border-box;
                 background-color:rgb(17, 130, 205);; 
                border:2px solid black;
                /* border-radius:10px; */
                text-align:center;
                
            }
            .box2{
                width:30vw;
                background-image: url('');
                height:100vh;
                border:2px solid black;
                /* border-radius:10px; */
                background-image: url("https://iitk.ac.in/hall12/images/other/shivaji.jpg");
                background-repeat: no-repeat;
                background-position: center;
                background-size: 100% 100%;  
                color:yellow;             


            }
            a{
                text-decoration: none;
            }
            a:hover{
                color:chocolate;
                font-weight:bold;
            }
            .img1, .img2, .img3{
                position:absolute;
                top:139px;
                width:100px;
                right: 200px;

                
            }
            
            .prev, .next{
                cursor: pointer;
  position: absolute;
  top: 50%;
  width: auto;
  margin-top: -22px;
  padding: 16px;
  color: white;
  font-weight: bold;
  font-size: 18px;
  transition: 0.6s ease;
  border-radius: 0 3px 3px 0;
  user-select: none;


            }
            .header{
                width:100%;
                box-sizing:border-box;
                background-color: rgb(174, 206, 43);
                height:50px;
                margin-top:0px;
                
                
            }

            p{
                font-size:20px;

                /* font-size:10px; */
            }




        </style>


    </head>
    <body>
        <div class="header" style="margin-top:13px"><nav class="nav">
            <ul>
                <li><a href="">HOME</a></li>
                <li><a href="">HALL WARDEN & HEC</a></li>
                <li><a href="">MESS & DUES</a></li>
                <li><a href="">HALL OFFICE                
                </a></li>
                <li><a href="">FORMS & LINKS</a></li>
                <li><a href="">GENERAL CHAMPIONSHIP</a></li>
                <li><a href="">CLUBS</a></li>
                <li><a href="">COUNSELLING SERVICE</a></li>
                <li><input type="search" placeholder="searchbox" style="margin-top:13px; margin-right: 20px;"></li>
            </ul>
        </nav></div>
        <div class="cont">
            <div class="box1">
                <div class="intro">
                    <h1> Hall 12</h1>
                    <p>Hall of Residence 12 is the newest among all other hostels at IIT Kanpur. It is the only male Hostel having a lift for the students. It is situated at the north-west zone of IIT Kanpur campus. The hostel has six blocks, A, B, C, D, E, and F and each block is 6 storey building. It has a capacity of about 600 students with about 456 rooms. The Hall has single, double and triple occupancy... The hall mainly consists of first, second, third-year B.Tech students.</p>
                    <h1>PHOTO GALLERY</h1>
                    <div class="pht" style="border:2px solid black ;height:300px;">
                        here a slider with images
                    </div>
                </div>
            </div>
            <div class="box2"><center><h2 style="color:rgb(214, 217, 46)"> ANNOUNCEMENT & NOTICES </h2></center>
            HERE WE CAN PUT A SLIDESHOW OF ANNOUNCEMENT <div class="img1">b1
                <img src="" style="width:100px">
            </div>
                 <div class="img2">b2<img src="" style="width:100px"></div>
                <div class="img3">b3<img src="" style="width:100px"></div>
                <a class="prev" onclick="plusSlides(-1)">&#x2191;</a>
                <a class="next" onclick="plusSlides(1)">&#x2193;</a>
        </div>

        
            
        </div>
        
        

    </body>
</html>
