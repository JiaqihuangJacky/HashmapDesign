{"filter":false,"title":"hello-c-world.c","tooltip":"/hello-c-world.c","undoManager":{"mark":5,"position":5,"stack":[[{"start":{"row":0,"column":0},"end":{"row":5,"column":0},"action":"remove","lines":["#include <stdio.h>","","main() {","    printf(\"Hello World!\\n\");","}",""],"id":2},{"start":{"row":0,"column":0},"end":{"row":54,"column":1},"action":"insert","lines":["// function example","#include <iostream>","using namespace std;","","int addition (int a, int b)","{","int r;","r=a+b;","return (r);","}","","int main ()","{","int z;","z = addition (5,3);","cout << \"The result is \" << z;","return 0;","}","","","","in this program function is not declared","","and the following program it is declared.","","","// declaring functions prototypes","#include <iostream>","using namespace std;","","void odd (int a); // declared functions","void even (int a);","","int main ()","{","int i;","do {","cout << \"Type a number (0 to exit): \";","cin >> i;","odd (i);","} while (i!=0);","return 0;","}","","void odd (int a)","{","if ((a%2)!=0) cout << \"Number is odd.\\n\";","else even (a);","}","","void even (int a)","{","if ((a%2)==0) cout << \"Number is even.\\n\";","else odd (a);","}"]}],[{"start":{"row":20,"column":0},"end":{"row":25,"column":0},"action":"remove","lines":["","in this program function is not declared","","and the following program it is declared.","",""],"id":3}],[{"start":{"row":19,"column":0},"end":{"row":20,"column":0},"action":"remove","lines":["",""],"id":4}],[{"start":{"row":18,"column":0},"end":{"row":19,"column":0},"action":"remove","lines":["",""],"id":5}],[{"start":{"row":19,"column":0},"end":{"row":47,"column":1},"action":"remove","lines":["// declaring functions prototypes","#include <iostream>","using namespace std;","","void odd (int a); // declared functions","void even (int a);","","int main ()","{","int i;","do {","cout << \"Type a number (0 to exit): \";","cin >> i;","odd (i);","} while (i!=0);","return 0;","}","","void odd (int a)","{","if ((a%2)!=0) cout << \"Number is odd.\\n\";","else even (a);","}","","void even (int a)","{","if ((a%2)==0) cout << \"Number is even.\\n\";","else odd (a);","}"],"id":6}],[{"start":{"row":0,"column":0},"end":{"row":19,"column":0},"action":"remove","lines":["// function example","#include <iostream>","using namespace std;","","int addition (int a, int b)","{","int r;","r=a+b;","return (r);","}","","int main ()","{","int z;","z = addition (5,3);","cout << \"The result is \" << z;","return 0;","}","",""],"id":7},{"start":{"row":0,"column":0},"end":{"row":99,"column":0},"action":"insert","lines":["","<!DOCTYPE html>","<html lang=\"en\">","  <head>","    <meta charset=\"utf-8\">","    <meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">","    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">","    <!-- The above 3 meta tags *must* come first in the head; any other head content must come *after* these tags -->","    <meta name=\"description\" content=\"\">","    <meta name=\"author\" content=\"\">","    <link rel=\"icon\" href=\"../../favicon.ico\">","","    <title>Navbar Template for Bootstrap</title>","","    <!-- Bootstrap core CSS -->","    <link href=\"../../dist/css/bootstrap.min.css\" rel=\"stylesheet\">","","    <!-- IE10 viewport hack for Surface/desktop Windows 8 bug -->","    <link href=\"../../assets/css/ie10-viewport-bug-workaround.css\" rel=\"stylesheet\">","","    <!-- Custom styles for this template -->","    <link href=\"navbar.css\" rel=\"stylesheet\">","","    <!-- Just for debugging purposes. Don't actually copy these 2 lines! -->","    <!--[if lt IE 9]><script src=\"../../assets/js/ie8-responsive-file-warning.js\"></script><![endif]-->","    <script src=\"../../assets/js/ie-emulation-modes-warning.js\"></script>","","    <!-- HTML5 shim and Respond.js for IE8 support of HTML5 elements and media queries -->","    <!--[if lt IE 9]>","      <script src=\"https://oss.maxcdn.com/html5shiv/3.7.3/html5shiv.min.js\"></script>","      <script src=\"https://oss.maxcdn.com/respond/1.4.2/respond.min.js\"></script>","    <![endif]-->","  </head>","","  <body>","","    <div class=\"container\">","","      <!-- Static navbar -->","      <nav class=\"navbar navbar-default\">","        <div class=\"container-fluid\">","          <div class=\"navbar-header\">","            <button type=\"button\" class=\"navbar-toggle collapsed\" data-toggle=\"collapse\" data-target=\"#navbar\" aria-expanded=\"false\" aria-controls=\"navbar\">","              <span class=\"sr-only\">Toggle navigation</span>","              <span class=\"icon-bar\"></span>","              <span class=\"icon-bar\"></span>","              <span class=\"icon-bar\"></span>","            </button>","            <a class=\"navbar-brand\" href=\"#\">Project name</a>","          </div>","          <div id=\"navbar\" class=\"navbar-collapse collapse\">","            <ul class=\"nav navbar-nav\">","              <li class=\"active\"><a href=\"#\">Home</a></li>","              <li><a href=\"#\">About</a></li>","              <li><a href=\"#\">Contact</a></li>","              <li class=\"dropdown\">","                <a href=\"#\" class=\"dropdown-toggle\" data-toggle=\"dropdown\" role=\"button\" aria-haspopup=\"true\" aria-expanded=\"false\">Dropdown <span class=\"caret\"></span></a>","                <ul class=\"dropdown-menu\">","                  <li><a href=\"#\">Action</a></li>","                  <li><a href=\"#\">Another action</a></li>","                  <li><a href=\"#\">Something else here</a></li>","                  <li role=\"separator\" class=\"divider\"></li>","                  <li class=\"dropdown-header\">Nav header</li>","                  <li><a href=\"#\">Separated link</a></li>","                  <li><a href=\"#\">One more separated link</a></li>","                </ul>","              </li>","            </ul>","            <ul class=\"nav navbar-nav navbar-right\">","              <li class=\"active\"><a href=\"./\">Default <span class=\"sr-only\">(current)</span></a></li>","              <li><a href=\"../navbar-static-top/\">Static top</a></li>","              <li><a href=\"../navbar-fixed-top/\">Fixed top</a></li>","            </ul>","          </div><!--/.nav-collapse -->","        </div><!--/.container-fluid -->","      </nav>","","      <!-- Main component for a primary marketing message or call to action -->","      <div class=\"jumbotron\">","        <h1>Navbar example</h1>","        <p>This example is a quick exercise to illustrate how the default, static navbar and fixed to top navbar work. It includes the responsive CSS and HTML, so it also adapts to your viewport and device.</p>","        <p>","          <a class=\"btn btn-lg btn-primary\" href=\"../../components/#navbar\" role=\"button\">View navbar docs &raquo;</a>","        </p>","      </div>","","    </div> <!-- /container -->","","","    <!-- Bootstrap core JavaScript","    ================================================== -->","    <!-- Placed at the end of the document so the pages load faster -->","    <script src=\"https://ajax.googleapis.com/ajax/libs/jquery/1.12.4/jquery.min.js\"></script>","    <script>window.jQuery || document.write('<script src=\"../../assets/js/vendor/jquery.min.js\"><\\/script>')</script>","    <script src=\"../../dist/js/bootstrap.min.js\"></script>","    <!-- IE10 viewport hack for Surface/desktop Windows 8 bug -->","    <script src=\"../../assets/js/ie10-viewport-bug-workaround.js\"></script>","  </body>","</html>",""]}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":99,"column":0},"end":{"row":99,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1506560448666,"hash":"0f301766b41c927893cd8d7ae5fbec19ab0379c6"}