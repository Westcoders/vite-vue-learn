<template>
  <div class="testBox">
    <fast-test></fast-test>
    <br />
    <img-check-group
      :groupValues="groupValuesOne"
      :groupAddress="groupAddressOne"
      :defaultCheckeds="groupCheckeds"
    ></img-check-group>
    <br />
    <button-group>
      <button-option size="small"></button-option>
      <button-option name="点我" :isAllowed="false"></button-option>
      <button-option size="Middle" icon="search"></button-option>
    </button-group>
    <br />
    <grid-row>
      <grid-col></grid-col>
      <grid-col></grid-col>
      <grid-col></grid-col>
      <grid-col></grid-col>
    </grid-row>
  </div>
</template>

<script>
import ImgCheckGroup from "./ImgCheckGroup.vue";
import ButtonOption from "./ButtonOption.vue";
import ButtonGroup from "./ButtonGroup.vue";
import GridRow from "./GridRow.vue";
import GridCol from "./GridCol.vue";
import FastTest from "./FastTest.vue";
export default {
  name: "TestBox",
  components: {
    ImgCheckGroup,
    ButtonOption,
    ButtonGroup,
    GridRow,
    GridCol,
    FastTest,
  },
  data() {
    return {
      groupValuesOne: ["图一", "图二", "图三", "图四"],
      groupAddressOne: [
        "src/components/Picture.png",
        "src/components/Picture.png",
      ],
      groupCheckeds: ["图二"],
    };
  },
};
</script>
<style scoped>
.testBox {
  background-color: rgb(222, 246, 248);
  background-size: 100% 100%;
  position: relative;
  margin: auto;
  width: 1500px;
}
</style>
