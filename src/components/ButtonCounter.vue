<template>
  <button @click="count++">点击了 {{ count }} 次.</button>
</template>
<script>
export default {
  name: "ButtonCounter",
  data() {
    return {
      count: 0,
    };
  },
};
</script> 