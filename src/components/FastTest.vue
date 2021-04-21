<script>
import { h, render } from "vue";
export default {
  name: "FastTest",
  data() {
    return {
      thisBox: {
        color: "white",
        height: "60px",
        width: "300px",
      },
    };
  },
  render() {
    return h("div", { class: ["thisBox"] }, "小问题测试用");
  },
};
</script>
<style scoped>
.thisBox {
  background-color: white;
  height: 60px;
  width: 300px;
}
</style>