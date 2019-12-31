本项目根据 2020 年活动进行修复 by Snowflake_Pink

# 绘图自动姬

![Screenshot](https://i.loli.net/2018/12/31/5c29a0225e33f.png)

## 使用

安装 NodeJS

``` bash
git clone https://github.com/WhiteSnowPinkPinkWhatItLike/luoguPaintAutomatonTS.git
```

``` bash
npm install
```

``` bash
tsc
```

``` bash
cd dist
```

``` bash
node index.js
```
## 图片

图片用 Luogu 绘版所使用的 32 进制数表示，保存在 `data/test.32` 中，需确保图片为矩形。

也可以使用 `convert.cpp` 将 `.ppm` 格式的图片转换成 .32 格式，具体使用方法请自行 review 代码。

注意：`.ppm` 格式的图片需要使用 ASCII 编码，否则无法转换！

## Cookie

请将 Cookies 放置在 `data/users.json` 中，以下是一个 `data/users.json` 的示例：

``` json
{
  "users": [
    {
      "UID": "",
      "clientID": ""
    }
  ]
}
```

注意：在 `index.ts` 中可以调整图片左上角坐标
