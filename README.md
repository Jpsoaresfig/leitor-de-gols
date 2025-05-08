
</head>
<body>
  <h1>⚽ Goal Reader - Simple Goal Counter</h1>
  <p><strong>Author:</strong> João Pedro Soares</p>

  <h2>📌 Description</h2>
  <p>This project reads a text file containing goal records and processes the data to count and display the number of goals per player. It's a simple Java application focused on file reading, data parsing, and basic mapping operations using collections.</p>

  <h2>🛠️ Technologies Used</h2>
  <ul>
    <li>Java 11+</li>
    <li>BufferedReader</li>
    <li>HashMap / Collections</li>
  </ul>

  <h2>📂 Project Structure</h2>
  <pre>
leitor-de-gols/
├── src/
│   └── application/
│       └── Program.java
├── players.txt (sample input file)
  </pre>

  <h2>📄 Input File Format</h2>
  <p>The input file must contain lines in the following format:</p>
  <pre>
PlayerName,NumberOfGoals
Example:
João,2
Maria,1
João,1
  </pre>

  <h2>🚀 How to Run</h2>
  <ol>
    <li>Clone this repository</li>
    <li>Place your <code>players.txt</code> file in the project root or specify the path in the code</li>
    <li>Run the <code>Program.java</code> class</li>
  </ol>

  <h2>📊 Output</h2>
  <p>The application will output the total goals scored by each player:</p>
  <pre>
João: 3
Maria: 1
  </pre>

  <h2>🎯 Purpose</h2>
  <p>Project created for practicing file I/O, collections, and basic data processing in Java.</p>

  <h2>📄 License</h2>
  <p>This project is intended for educational and practice purposes.</p>

  <hr>
  <p align="center">📘 Developed by João Pedro Soares</p>
</body>
</html>
