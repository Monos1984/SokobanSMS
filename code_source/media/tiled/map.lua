return {
  version = "1.1",
  luaversion = "5.1",
  tiledversion = "0.17.1",
  orientation = "orthogonal",
  renderorder = "left-up",
  width = 16,
  height = 12,
  tilewidth = 16,
  tileheight = 16,
  nextobjectid = 1,
  properties = {},
  tilesets = {
    {
      name = "0",
      firstgid = 1,
      tilewidth = 16,
      tileheight = 16,
      spacing = 0,
      margin = 0,
      tileoffset = {
        x = 0,
        y = 0
      },
      properties = {},
      terrains = {},
      tilecount = 6,
      tiles = {
        {
          id = 2,
          properties = {
            ["int"] = 1
          },
          image = "../tiles/toiture.png",
          width = 16,
          height = 16
        },
        {
          id = 3,
          image = "../tiles/mur.png",
          width = 16,
          height = 16
        },
        {
          id = 4,
          image = "../tiles/Box_cible.png",
          width = 16,
          height = 16
        },
        {
          id = 5,
          image = "../tiles/Box.png",
          width = 16,
          height = 16
        },
        {
          id = 6,
          image = "../tiles/sol.png",
          width = 16,
          height = 16
        },
        {
          id = 7,
          image = "../tiles/cible.png",
          width = 16,
          height = 16
        }
      }
    }
  },
  layers = {
    {
      type = "tilelayer",
      name = "Calque de Tile 1",
      x = 0,
      y = 0,
      width = 16,
      height = 12,
      visible = true,
      opacity = 1,
      offsetx = 0,
      offsety = 0,
      properties = {},
      encoding = "lua",
      data = {
        3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0,
        0, 0, 0, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 0,
        0, 0, 0, 3, 7, 7, 7, 7, 8, 8, 7, 7, 7, 7, 3, 0,
        0, 0, 0, 3, 7, 7, 7, 7, 6, 6, 7, 7, 7, 7, 3, 0,
        0, 0, 0, 3, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 3, 0,
        0, 0, 0, 3, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 3, 0,
        0, 0, 0, 3, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 3, 0,
        0, 0, 0, 3, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 3, 0,
        0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0,
        0, 0, 0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
      }
    }
  }
}
