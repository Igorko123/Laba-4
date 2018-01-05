var ObjectID = require('mongodb').ObjectID;
var _dirname = 'F:/10-11lab';
module.exports = function(app, db) {
  app.get('/', (req, res) => {
    res.sendFile(_dirname + '/index.html');
  });
  app.get('/admin.html', (req, res) => {
    res.sendFile(_dirname + '/admin.html');
  });
  app.get('/contact.html', (req, res) => {
    res.sendFile(_dirname + '/contact.html');
  });
  app.get('/comment.html', (req, res) => {
    res.sendFile(_dirname + '/Feedback.html');
  });

  app.get('/news.html', (req, res) => {
    res.sendFile(_dirname + '/News.html');
  });
  app.get('/program.html', (req, res) => {
    res.sendFile(_dirname + '/program.html');
  });
};
