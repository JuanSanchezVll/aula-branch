[1mdiff --git a/index.html b/index.html[m
[1mindex 8b35e6b..45efdc7 100644[m
[1m--- a/index.html[m
[1m+++ b/index.html[m
[36m@@ -84,7 +84,7 @@[m
 [m
 [m
             if (lista == 1) {[m
[31m-                for (let i = nomeV.length; i >= 0; i--) {[m
[32m+[m[32m                for (let i = nomeV.length; i >= 1; i--) {[m
                     div.innerHTML += `<br>${nomeV[i - 1]}`[m
                 }[m
 [m
[36m@@ -117,5 +117,4 @@[m
         }[m
     }[m
 [m
[31m-[m
 </script>[m
\ No newline at end of file[m
