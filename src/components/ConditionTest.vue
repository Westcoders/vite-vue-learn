<template>
  <p>此处后文可见吗？：</p>
  <div v-if="myif">你看见我了</div>
  <button @click="myif= !myif , buttontext() " v-text="text"></button>
</template>
<script>
export default {
  name: "ConditionTest",
  data() {
    return {
      myif: false,
      text: "请点我",
    };
  },
  methods: {
    buttontext() {
      if (this.myif == true) {
        this.text = "使其消失";
      } else {
        this.text = "使其看见";
      }
    },
  },
};
</script>
