<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8">
    </head>
    <body>
        <button class='up'>销量升序</button>
        <button class='down'>销量降序</button>
        <ul></ul>
         
       <script src="https://ajax.aspnetcdn.com/ajax/jQuery/jquery-3.6.0.js"></script>
        <script>
            var cups = [
                { type: 1, price: 100, color: 'black', sales: 3000, name: '牛客logo马克杯' },
                { type: 2, price: 40, color: 'blue', sales: 1000, name: '无盖星空杯' },
                { type: 4, price: 60, color: 'green', sales: 200, name: '老式茶杯' },
                { type: 3, price: 50, color: 'green', sales: 600, name: '欧式印花杯' }
            ]
            var ul = document.querySelector('ul');
            var upbtn = document.querySelector('.up');
            var downbtn = document.querySelector('.down');
            // 补全代码
            $(".up").click(function () {
                cups.sort(function (a,b) { //升序排列
                    return a.sales-b.sales
                })
                $(ul.childNodes).remove() //清除 ul的子元素
                $(ul).append('<li>'+cups[0].name+'</li>')
                $(ul).append('<li>'+cups[1].name+'</li>')
                $(ul).append('<li>'+cups[2].name+'</li>')
                $(ul).append('<li>'+cups[3].name+'</li>')
            })
            $(".down").click(function () { //降序排列
                cups.sort(function (a,b) {
                    return b.sales-a.sales
                })
                $(ul.childNodes).remove() //清除 ul的子元素
                $(ul).append('<li>'+cups[0].name+'</li>')
                $(ul).append('<li>'+cups[1].name+'</li>')
                $(ul).append('<li>'+cups[2].name+'</li>')
                $(ul).append('<li>'+cups[3].name+'</li>')

            })
        </script>
    </body>
</html>