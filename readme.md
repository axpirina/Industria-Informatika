OPCUA nodoak Node Red Instalazio orokor batean instalatzeko.
Windows:

NodeJS 14 bertsioko azken aktualizazioa instalatu (.msi) 14.18.3
https://nodejs.org/en/download/releases/

Node Red instalatu

npm install -g --unsafe-perm node-red

Node Red instalatuta dagoen rutaraino joan:

Node-RED "C:\\users\<erabiltzaile_izena>\.node-red" karpetan instalatzen da. Bertan "node_modules" izeneko beste karpeta bat aurkituko dugu, baina OPC UA modulua instalatzeko, ez gara azpikarpeta horretan sartu behar.


cd C:\\users\<erabiltzaile_izena>\.node-red

OPCUA moduluak instalatu:

npm install --unsafe-perm --save node-red-contrib-iiot-opcua
