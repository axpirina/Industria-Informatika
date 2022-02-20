# OPCUA nodoak instalatu

[**OPCUA**](https://opcfoundation.org/) nodoak [**NODE RED**-en](https://nodered.org/) instalatu eta ondoren [**opc-ua-handler**](https://github.com/Tknika/node-red-subflows/tree/master/opc-ua-handler) subflow-a erabili ahal izateko beharrezko pausoak. 


<p align="center">
  <img src="/Irudiak/OPCUAhandler.png" width="624" height="300">
</p>


1. NodeJS instalatu. Kontuan izan 14 bertsioko azken instalatzailea erabiltzea. NodeJS web orriko errepositoriotik (.msi) artxiboa jaitsi eta exekutatu.
> NodeJS 14.18.3 (.msi) bertsioa instalatu https://nodejs.org/en/download/releases/

2. Node Red instalatu komando terminala erabiliaz. https://nodered.org/docs/getting-started/local
~~~sh
npm install -g --unsafe-perm node-red
~~~

3. Node Red instalatuta dagoen rutaraino joan. Orokorrean Node-RED **C:\\users\<erabiltzaile_izena>\.node-red** karpetan instalatzen da. Bertan **node_modules**  izeneko beste karpeta bat aurkituko dugu eta hemen gordeko dira instalatutako nodoak. **Baina** OPC UA modulua instalatzeko, ez gara azpikarpeta horretan sartu behar.

~~~sh
cd C:\\users\<erabiltzaile_izena>\.node-red
~~~

4. OPCUA moduluak instalatu:
~~~sh
npm install --unsafe-perm --save node-red-contrib-iiot-opcua
~~~
5. OPCUA Handler subflow-a jaitsi (opc-ua-handler.json) eta Node Red-en inportatu.

   https://github.com/Tknika/node-red-subflows/tree/master/opc-ua-handler
