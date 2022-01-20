# OPCUA nodoak Node Red-en instalatu

[**OPCUA**](https://opcfoundation.org/) nodoak [**NODE RED**-en](https://nodered.org/) instalatu eta ondoren [**opc-ua-handler**](https://github.com/Tknika/node-red-subflows/tree/master/opc-ua-handler) subflow-a erabili ahal izateko beharrezko pausoak. 


<p align="center">
  <img src="/Irudiak/NodeRed.png" width="624" height="300">
</p>


1. NodeJS instalatu. Kontuan izan 14 bertsioko azken instalatzailea erabiltzea. NodeJS web orriko errepositoriotik (.msi) artxiboa jaitsi eta exekutatu.
> NodeJS 14.18.3 (.msi) bertsioa instalatu https://nodejs.org/en/download/releases/

2. Node Red instalatu komando terminala erabiliaz. https://nodered.org/docs/getting-started/local
~~~sh
npm install -g --unsafe-perm node-red
~~~
 
3. Node Red exekutatu. Gogoratu Node Red :1880 portuan dagoela eskuragarri.

   http://127.0.0.1:1880/
