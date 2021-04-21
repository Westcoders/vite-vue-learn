<template>
  <p>模板引用部分</p>
  <p>{{}}</p>
</template>
<script>
export default {
  name: "Detection",
  data() {
    return {
      firstName: "Foo",
      lastName: "Bar",
      fullName: "Foo Bar",
    };
  },
  watch: {
    firstName() {
      this.fullName = +" " + this.lastName;
    },
    lastName() {
      this.fullName = this.firstName + " ";
    },
  },
};
</script>
<style scoped>
</style>