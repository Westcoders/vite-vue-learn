<template>
  <button v-on:click="mycounter1()">{{ counter }}</button>
  <div class="demo full-page">
    <h2>Scroll down the page</h2>
    <p v-pin:[direction]="200">Stick me 2001px from the {{ direction }} of the page</p>
    <input type="text" v-focus />
  </div>
</template>
<script>
export default {
  name: "CreatEvent",
  data: function () {
    return {
      counter: 0,
      direction: "right",
    };
  },
  emits: {
    // 没有验证
    click: null,

    // 验证submit 事件
    submit: ({ email, password }) => {
      if (email && password) {
        return true;
      } else {
        console.warn("Invalid submit event payload!");
        return false;
      }
    },
  },
  methods: {
    mycounter1() {
      this.counter += 1;
      this.$emit("mycount", { email, password });
    },
  },
  directives: {
    pin: {
      mounted(el, binding) {
        el.style.position = "fixed";
        const s = binding.arg || "top";
        el.style[s] = binding.value + "px";
      },
    },
    focus: {
      // 指令的定义
      mounted(el) {
        el.focus();
      },
    },
  },
};
</script> 
<style scoped>
.demo {
  font-family: sans-serif;
  border: 1px solid #eee;
  border-radius: 2px;
  padding: 20px 30px;
  margin-top: 1em;
  margin-bottom: 40px;
  user-select: none;
  overflow-x: auto;
}

.full-page {
  height: 50vh;
}
</style>