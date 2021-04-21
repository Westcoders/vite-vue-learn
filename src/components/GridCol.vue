<template>
  <div :class="[colortype,'defaultSettings']">123{{information}}</div>
</template>
<script>
export default {
  name: "GridCol",
  data() {
    return {
      colortype: "",
      information: "",
    };
  },
  inject: ["thisRow"],
  methods: {
    getThisSeat() {
      const Row = this.thisRow;
      if (Row.children < 4 && Row.children % 2 == 0) {
        Row.children++;
        this.colortype = "blue1";
      } else if (Row.children < 4) {
        Row.children++;
        this.colortype = "blue2";
      } else {
        Row.children++;
        this.colortype = "red";
        this.information = "总栅格数大于4个，请删除此栅格";
      }
    },
  },
  created() {
    this.getThisSeat();
  },
};
</script>
<style scoped>
.red {
  background-color: red;
}
.blue1 {
  background-color: royalblue;
}
.blue2 {
  background-color: "";
}
.defaultSettings {
  display: inline-block;
  color: white;
  width: 25%;

  margin: auto;
  text-align: center;
  position: relative;
  font-size: 18px;
  padding: 30px 0;
}
</style>