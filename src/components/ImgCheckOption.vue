<template>
  <div @click="beChecked()" class="checkedOption">
    <img :src="address" alt="未加载图片" />
    <img v-if="ifChecked" src="src/components/checked.jpeg" alt="未设置图片" />
    {{value}}
  </div>
</template>
<script>
export default {
  name: "ImgCheckOption",
  data() {
    return {
      ifChecked: false,
      isChecked: {
        type: Boolean,
        default: false,
      },
    };
  },
  inject: ["GroupContext"],
  props: {
    value: {
      type: String,
      default: "未设置值",
    },
    address: {
      type: String,
      default: null,
    },
  },
  methods: {
    beChecked() {
      const group = this.GroupContext;
      this.ifChecked = !this.ifChecked;
      if (this.ifChecked) {
        group.checkedContext.push(this.value);
      } else {
        group.checkedContext = group.checkedContext.filter(
          (item) => item != this.value
        );
      }
    },
    defaultChecked() {
      const group = this.GroupContext;
      if (group.defaultCheckeds.includes(this.value)) {
        this.ifChecked = true;
        group.checkedContext.push(this.value);
      }
    },
  },
  created() {
    this.defaultChecked();
  },
};
</script>
<style  scoped>
.checkedOption {
}
</style>
