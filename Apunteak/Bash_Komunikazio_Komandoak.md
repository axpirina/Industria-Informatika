
# Windows Terminaleko Komunikazio Ariketak

### 1. **Host baten konexioa probatu (`ping`)**

- **Ariketa**: Sarean dagoen beste gailu edo zerbitzari batekin konexioa dagoen ala ez ikusi.
- **Komandoa**:
  ```bash
  ping <host_name_or_IP>
  ```
  - Adibidez, Google zerbitzariarekin konexioa probatzeko:
  ```bash
  ping google.com
  ```

---

### 2. **Sareko konfigurazioa ikusi (`ipconfig`)**

- **Ariketa**: Zure ordenagailuaren IP helbidea eta sareko beste parametro batzuk ikusi.
- **Komandoa**:
  ```bash
  ipconfig
  ```
  - Aukera gehiago ikusteko:
  ```bash
  ipconfig /all
  ```

---

### 3. **Ataka irekiak begiratu eta entzumena egitekoak identifikatu (`netstat`)**

- **Ariketa**: Zein ataka erabiltzen ari diren eta zeintzuk dauden irekiak zure ordenagailuan ikusi.
- **Komandoa**:
  ```bash
  netstat -a
  ```
  - Konexio mota bakoitzeko informazioa ere ikusi dezakezu:
  ```bash
  netstat -an
  ```

---

### 4. **DNS cache-a bistaratu eta garbitu (`ipconfig /displaydns` eta `ipconfig /flushdns`)**

- **Ariketa**: DNS bilaketaren cachea ikusi eta garbitu.
- **Komandoa cachea ikusteko**:
  ```bash
  ipconfig /displaydns
  ```
  - **Cachea garbitzeko**:
  ```bash
  ipconfig /flushdns
  ```

---

### 5. **Web zerbitzari batekin HTTP bidez konektatu (`curl`)**

- **Ariketa**: Web zerbitzari batekin komunikazioa HTTP edo HTTPS bidez egin.
- **Komandoa**:
  ```bash
  curl http://example.com
  ```

---

### 6. **Zerbitzari batean atakak eskaneatu (`Test-NetConnection`)**

- **Ariketa**: Zerbitzari batean ataka jakin bat irekitako dagoen egiaztatu.
- **Komandoa PowerShell-en**:
  ```bash
  Test-NetConnection -ComputerName <host> -Port <port_number>
  ```
  - Adibidez, google.com-en 80. ataka irekitako dagoen ikusteko:
  ```bash
  Test-NetConnection -ComputerName google.com -Port 80
  ```

---

### 7. **Fitxategi bat beste gailu batera kopiatu (`scp`)**

- **Ariketa**: Fitxategi bat sare bidez kopiatu gailu batetik bestera `scp` erabiliz.
- **Komandoa**:
  ```bash
  scp <local_file> <user>@<remote_host>:<remote_directory>
  ```
  - Adibidez, fitxategi bat urruneko zerbitzari batera bidaltzeko:
  ```bash
  scp myfile.txt user@192.168.1.2:/home/user/
  ```

---

### 8. **Traceroute bidez bidea jarraitu (`tracert`)**

- **Ariketa**: Pakete bat helmugara heltzeko sarean zein bide jarraitzen duen ikusi.
- **Komandoa**:
  ```bash
  tracert <host>
  ```
  - Adibidez, Google zerbitzarirako bidea ikusteko:
  ```bash
  tracert google.com
  ```

---
