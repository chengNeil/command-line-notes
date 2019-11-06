.1. upload files to matrix

    1.sftp cghe@matrix.senecac.on.ca//connect to matrix by sftp
    2.cd oop345/w7 //change to directory
    3.put -r C:/Users/neil1/Desktop/ws7/ws7.zip //upload files and content recursivly
    4. bye // exit sftp  shell //or exit, Ctrl+d

.2. download file from server

    //for file
    1.get oop345/w7/ws7.zip C:/Users/neil1/Desktop/ws7/ws7.zip

    //for directory
    1.get -r oop345/w7 C:/Users/neil1/Desktop

.3. connect to matrix 

    1. ssh cghe@matrix.senecac.on.ca //connect to matrix by ssh

