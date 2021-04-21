<script>
import { h, provide } from "vue";
import ImgCheckOption from "./ImgCheckOption.vue";
export default {
  name: "ImgCkeckGroup",
  components: {
    ImgCheckOption,
  },
  props: {
    groupValues: {
      type: Array,
      default: ["空值一", "空值二"],
    },
    groupAddress: {
      type: Array,
      default: ["src/components/Picture.png"],
    },
    defaultCheckeds: {
      type: Array,
      default: [],
    },
  },
  data() {
    return {
      values: String,
      Option: Array,
      checkedContext: [],
    };
  },
  methods: {},
  provide() {
    return {
      GroupContext: this,
    };
  },
  render() {
    this.DomContext = [];
    for (var n = 0; n < this.groupValues.length; n++) {
      this.DomContext.push(
        h(ImgCheckOption, {
          value: this.groupValues[n],
          address: this.groupAddress[n],
        })
      );
    }
    return h("div", [
      this.DomContext,
      h("div", this.groupValues.length + "个选项"),
      h("div", this.checkedContext[0]),
    ]);
  },
};
</script>