<template>
  <div :class="classobject">classobject的测试</div>
  <div :style="styleobject ">styleobject的测试</div>
</template>
<script>
export default {
  name: "ClassStyleBind",
  data() {
    return {
      classobject: {
        active: true,
        color: "red",
        "text-danger": true,
      },
      classarray: {},
      styleobject: {
        color: "red",
        fontSize: "13px",
      },
    };
  },
};
</script>
<style scoped>
.thisdiv {
  background-color: aqua;
}
</style>