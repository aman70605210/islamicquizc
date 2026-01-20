<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <title>Islamic Donation Farah</title>
  <link rel="stylesheet" href="style.css">
</head>
<body>

  <header>
    <h1>🕌 Islamic Donation Farah</h1>
    <p>Monthly Donation Record (₹100 / Month)</p>
  </header>

  <div class="container">
    <div class="controls">
      <input type="text" id="donorName" placeholder="Donor Name">
      <button onclick="addDonor()">Add Donor</button>
      <button class="download" onclick="downloadExcel()">Download Excel</button>
    </div>

    <div class="table-box">
      <table id="donationTable">
        <thead>
          <tr>
            <th>Donor</th>
            <th>Jan</th><th>Feb</th><th>Mar</th><th>Apr</th>
            <th>May</th><th>Jun</th><th>Jul</th><th>Aug</th>
            <th>Sep</th><th>Oct</th><th>Nov</th><th>Dec</th>
            <th>Total</th>
          </tr>
        </thead>
        <tbody></tbody>
      </table>
    </div>
  </div>

  <script src="script.js"></script>
</body>
</html>