<template>
  <p>是否现出现：{{pass}}</p>
</template>
<script>
export default {
  name: "ProvideInject",
  data() {
    return {
      thecontent: "原始文本",
    };
  },
  inject: ["pass"],
};
</script>