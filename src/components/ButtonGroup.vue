<script>
import ButtonOption from "./ButtonOption.vue";
import { h, provide } from "vue";
export default {
  name: "ButtonGroup",
  components: {
    ButtonOption,
  },
  render() {
    return h("div", ["一组按钮", h("div", this.$slots.default())]);
  },
};
</script>