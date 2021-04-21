<template>
  <div>
    <p>组件实例</p>
    <button-counter></button-counter>
  </div>
  <br />

  <p>props</p>
  <text-view message="123"></text-view>
  <br />
  <div>
    <p>复选图</p>
    <input type="checkbox" id="one" value="图一" v-model="checkedNames" :checked="checked" />
    <label for="one">
      <img src="./Picture.png" alt="图片" width="200" height="200" @click="counter1 += 1" />
    </label>
    <input type="checkbox" id="two" value="图二" v-model="checkedNames" :checked="checked" />
    <label for="two">
      <img src="./Picture.png" alt="图片" width="200" height="200" />
    </label>
    <input type="checkbox" id="three" value="图三" v-model="checkedNames" :checked="checked" />
    <label for="three">
      <img src="./Picture.png" alt="图片" width="200" height="200" />
    </label>
    <br />
    <span>已选图片: {{ checkedNames }}</span>
    <br />
    <span>属性计算部分：{{ifhascontent}}</span>
    <br />
    <span>侦听部分：{{ifhear}}</span>
    <p>图片一选中监听 {{ counter1 }}</p>
    <button @click=" allcheck() ">全选</button>
    <input ref="input" />
    <detection></detection>
    <class-style-bind></class-style-bind>
    <condition-test></condition-test>
    <slot-test>此处无Slot</slot-test>
    <slot-test></slot-test>
    <provide-inject></provide-inject>
    <dynamic-async></dynamic-async>
    <div>自定义的count（鼠标点击）加法器：{{title}}</div>
    <creat-event v-on:mycount="mycounter2()"></creat-event>
    <transition-test></transition-test>
  </div>
  <br />
  <test-box></test-box>
</template>

<script>
import ButtonCounter from "./ButtonCounter.vue";
import TextView from "./TextView.js";
import Detection from "./Detection.vue";
import ClassStyleBind from "./ClassStyleBind.vue";
import ConditionTest from "./ConditionTest.vue";
import CreatEvent from "./CreatEvent.vue";
import SlotTest from "./SlotTest.vue";
import ProvideInject from "./ProvideInject.vue";
import DynamicAsync from "./DynamicAsync.vue";
import TransitionTest from "./TransitionTest.vue";
import TestBox from "./TestBox.vue";
const mymixin = {
  beforecreate() {
    this.hello();
  },
  methods: {
    hello() {
      console.log("hello from mixin!");
    },
  },
};

export default {
  name: "ProjectTest",
  mixins: [mymixin],
  components: {
    ButtonCounter,
    TextView,
    Detection,
    ClassStyleBind,
    ConditionTest,
    CreatEvent,
    SlotTest,
    ProvideInject,
    DynamicAsync,
    TransitionTest,

    TestBox,
  },

  data() {
    return {
      checkedNames: [],
      counter1: 0,
      counter2: 0,
      ifture: true,
      checked: false,
      passmessage: "传给子代的消息",
      title: 0,
      ifhear: "",
    };
  },
  provide() {
    return {
      pass: this.passmessage,
    };
  },

  watch: {
    checkedNames() {
      this.ifhear = "you";
    },
  },
  methods: {
    bechecked() {
      if (this.checked) {
        this.checkedNames = "";
      } else {
        this.checkedNames = "图一";
      }
    },
    allcheck() {
      if (this.ifture) {
        this.ifture = !this.ifture;
        this.checked = true;
        this.checkedNames = "图一，图二，图三 ";
        console.log("hello from mixin!");
      } else {
        this.ifture = !this.ifture;
        this.checked = false;
        this.checkedNames = "";
      }
    },
    mycounter2() {
      this.title += 1;
    },
  },
  computed: {
    //methods 同样可以实现该功能
    ifhascontent() {
      return this.checkedNames.length > 0 ? "有图被选中" : "没图被选中";
    },
  },
};
</script>
<style scoped>
a {
  color: #e3f0ea00;
}
</style>