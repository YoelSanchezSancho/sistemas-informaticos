# ACTIVIDAD 6 - GitHub

## 1. Crear el repositorio remoto
Primero accederemos a GitHub y crearemos un repositorio en la rama de ies-grao

![](./img-git/Captura%20de%20pantalla%20-2026-10-15%2019-47-44.png)

Hacemos scroll hasta abajo del todo y le damos al boton verde que dice Create Repository

![](./img-git/Captura%20de%20pantalla%20-2026-10-15%2019-49-00.png)

Y ya lo tenemos creado

Lo he remobrado porque me he equivocado de nombre
![](./img-git/Captura%20de%20pantalla%20-2026-10-15%2019-51-46.png)

Lo hemos creado privado

## 2. Autenticación mediante SSH

Vamos a trabajar mediante SSH en la terminal
Primero tenemos que comprobar si tenemos alguna clave creada de SSH

![](./img-git/Captura%20de%20pantalla%20-2026-10-15%2019-55-56.png)

Como ya hicimos una clave en clase ya la tengo creada
Lo mas importante es verificar que tenemos estos dos archivos creados  

id_ed25519

id_ed25519.pub

### Configurar el puerto 443
Primero tendremos que editar el archivo de configuracion de SSh
Para entrar a editarlo tendremos que copiar en la terminal el siguiente comando y darle al enter:  
nano ~/.ssh/config  
Y aparecera lo siguiente:

![](./img-git/Captura%20de%20pantalla%20-2026-10-15%2019-59-33.png)

Ahora tenemos que copiar dentro del archivo el texto siguiente como va a aparecer en la imagen:  
Host github.com  
    Hostname ssh.github.com  
    Port 443  
    User git  

![](./img-git/Captura%20de%20pantalla%20-2026-10-15%2020-00-54.png)

Y le daremos al "Control" + "O" para guardar el archivo y le daras al enter para confirmar

![](./img-git/Captura%20de%20pantalla%20-2026-10-15%2020-02-01.png)

Y luego "Control" + "X" para salir

### Comprobar conexión
Finalmente comprobaremos la conexion SSH con GitHub

![](./img-git/Captura%20de%20pantalla%20-2026-10-15%2020-03-39.png)

La primera vez hay que teclear "yes" para poder avanzar

![](./img-git/Captura%20de%20pantalla%20-2026-10-15%2020-04-31.png)

Y comprobamos perfectamente q ya estamos conectados

## 3. Conectar los repositorios
Para conectar los repositorios tendremos que utilizar el siguiente comando: git remote add origin <direccion-ssh>
Mi direccion SSH en mi caso es la siguiente: git@github.com:iesgrao-daw-2627/yoelsansan-docs.git y la encontramos en el siguiente lugargit push

![](./img-git/Captura%20de%20pantalla%20-2026-10-15%2020-07-34.png)

Ahora si copiamos el comando con nuestra direccion SSH y le damos a enter

![](./img-git/Captura%20de%20pantalla%20-2026-10-15%2020-13-50.png)

A mi ya me aparece creado porque lo creamos en clase todos juntos

Para comprobar que lo tengo bien instalado utilizaremos el siguiente comando: git remote -v

![](./img-git/Captura%20de%20pantalla%20-2026-10-15%2020-14-52.png)

## 4. Primer push
Primero tendremos que comprobar en que rama estamos.  
Para eso utilizaremos en comando "branch"

![](./img-git/Captura%20de%20pantalla%20-2026-10-15%2020-17-43.png)

Comprobamos que estamso correctamente en la rama main

Realizaremos el primer push con el siguiente comando: 
git push -u origin main

![](./img-git/Captura%20de%20pantalla%20-2026-10-15%2020-21-41.png)

Aqui comprobamos que esta todo en orden (solo que no se ven archivos porque no hay directamente)

![](./img-git/Captura%20de%20pantalla%20-2026-10-15%2020-24-04.png)

## 5. Realizar nuevos cambios
Primero vamos a comprobar que este todo actualizado con el comando: git pull

![](./img-git/Captura%20de%20pantalla%20-2026-10-15%2020-28-01.png)

Despues tenemos que modificar algun documento que tengamos

Una vez tocados esos cambios vamos a comprobar los cambios realizados

![](./img-git/Captura%20de%20pantalla%20-2026-10-15%2020-29-50.png)

Una vez comprobado todo esto agregamos todos los cambios hechos con el comando: git add . (asi todos los cambios los guardamos de una)

![](./img-git/Captura%20de%20pantalla%20-2026-10-15%2020-30-42.png)

Si utilizo el git diff no me aparece nada porque no hay diferencia con nada porque no habia nada antes pero basicamente comprueba todo lo que se ha cambiado.

Ahora por ultimo haremos ya el commit

![](./img-git/Captura%20de%20pantalla%20-2026-10-15%2020-33-16.png)

Y ahora si por ultimo hacemos el ultimo push

![](./img-git/Captura%20de%20pantalla%20-2026-10-15%2020-38-02.png)

## DOCUMENTACION UTILIZADA

Todos los comandos utilizados:

ls -la ~/.ssh  

nano ~/.ssh/config  

ssh -T git@github.com

git remote add origin <dirección-SSH>

git remote -v

git branch

git push -u origin main

git pull

git status

git diff

git add .

git commit -m ""

git push


### [Enlace a la pagina principal](../../index.md)