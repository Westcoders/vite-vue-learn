<script>
import { h, provide } from "vue";
export default {
  name: "GridRow",
  data() {
    return {
      children: 0,
      row: {
        color: "red",
      },
    };
  },
  provide() {
    return { thisRow: this };
  },
  render() {
    const test = {
      position: "sticky",
      margin: "0",
      zoom: "1",
      height: "auto",
      color: "red",
      display: "block",
      boxsizing: "border-box",
      background: "",
      overflow: "hidden",
      marginbottom: "8px",
      width: "535.9px",
    };
    return h(
      "div",
      {
        style: {},
      },
      [this.$slots.default()]
    );
  },
};
</script>
<style scoped>
.row {
  position: absolute;
  margin-right: 0;
  margin-left: 0;
  zoom: 1;
  color: red;
  display: block;
  box-sizing: border-box;
  background-image: l 2202inear-gradient(
      90deg,
      #f5f5f5 4.16666667%,
      transparent 0,
      transparent 8.33333333%,
      #f5f5f5 0,
      #f5f5f5 12.5%,
      transparent 0,
      transparent 16.66666667%,
      #f5f5f5 0,
      #f5f5f5 20.83333333%,
      transparent 0,
      transparent 25%,
      #f5f5f5 0,
      #f5f5f5 29.16666667%,
      transparent 0,
      transparent 33.33333333%,
      #f5f5f5 0,
      #f5f5f5 37.5%,
      transparent 0,
      transparent 41.66666667%,
      #f5f5f5 0,
      #f5f5f5 45.83333333%,
      transparent 0,
      transparent 50%,
      #f5f5f5 0,
      #f5f5f5 54.16666667%,
      transparent 0,
      transparent 58.33333333%,
      #f5f5f5 0,
      #f5f5f5 62.5%,
      transparent 0,
      transparent 66.66666667%,
      #f5f5f5 0,
      #f5f5f5 70.83333333%,
      transparent 0,
      transparent 75%,
      #f5f5f5 0,
      #f5f5f5 79.16666667%,
      transparent 0,
      transparent 83.33333333%,
      #f5f5f5 0,
      #f5f5f5 87.5%,
      transparent 0,
      transparent 91.66666667%,
      #f5f5f5 0,
      #f5f5f5 95.83333333%,
      transparent 0
    );
  overflow: hidden;
  margin-bottom: 8px;
  width: 535.9px;
  height: 86.4px;
}
.test {
  color: red;
}
</style>