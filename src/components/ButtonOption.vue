
 
<template>
  <div class="buttonBox">
    <button :class="['button',size ,defaultAllowed,]">
      <i v-if="defaultIcon('search')">
        <svg
          viewBox="64 64 896 896"
          data-icon="search"
          width="1em"
          height="1em"
          fill="currentColor"
          aria-hidden="true"
          focusable="false"
          class
        >
          <path
            d="M909.6 854.5L649.9 594.8C690.2 542.7 712 479 712 412c0-80.2-31.3-155.4-87.9-212.1-56.6-56.7-132-87.9-212.1-87.9s-155.5 31.3-212.1 87.9C143.2 256.5 112 331.8 112 412c0 80.1 31.3 155.5 87.9 212.1C256.5 680.8 331.8 712 412 712c67 0 130.6-21.8 182.7-62l259.7 259.6a8.2 8.2 0 0 0 11.6 0l43.6-43.5a8.2 8.2 0 0 0 0-11.6zM570.4 570.4C528 612.7 471.8 636 412 636s-116-23.3-158.4-65.6C211.3 528 188 471.8 188 412s23.3-116.1 65.6-158.4C296 211.3 352.2 188 412 188s116.1 23.2 158.4 65.6S636 352.2 636 412s-23.3 116.1-65.6 158.4z"
          />
        </svg>
      </i>
      <i v-if="defaultIcon('cloud')">
        <svg
          viewBox="64 64 896 896"
          data-icon="cloud"
          width="1em"
          height="1em"
          fill="currentColor"
          aria-hidden="true"
          focusable="false"
          class
        >
          <path
            d="M811.4 418.7C765.6 297.9 648.9 212 512.2 212S258.8 297.8 213 418.6C127.3 441.1 64 519.1 64 612c0 110.5 89.5 200 199.9 200h496.2C870.5 812 960 722.5 960 612c0-92.7-63.1-170.7-148.6-193.3zm36.3 281a123.07 123.07 0 0 1-87.6 36.3H263.9c-33.1 0-64.2-12.9-87.6-36.3A123.3 123.3 0 0 1 140 612c0-28 9.1-54.3 26.2-76.3a125.7 125.7 0 0 1 66.1-43.7l37.9-9.9 13.9-36.6c8.6-22.8 20.6-44.1 35.7-63.4a245.6 245.6 0 0 1 52.4-49.9c41.1-28.9 89.5-44.2 140-44.2s98.9 15.3 140 44.2c19.9 14 37.5 30.8 52.4 49.9 15.1 19.3 27.1 40.7 35.7 63.4l13.8 36.5 37.8 10c54.3 14.5 92.1 63.8 92.1 120 0 33.1-12.9 64.3-36.3 87.7z"
          />
        </svg>
      </i>
      {{name}}
    </button>
  </div>
</template>
<script>
export default {
  name: "ButtonOption",
  components: {},
  data() {
    return {
      defaulAllowed: "",
    };
  },
  props: {
    size: "",
    name: {
      type: String,
      default: "none",
    },
    isAllowed: {
      type: Boolean,
      default: true,
    },
    icon: {
      type: String,
      default: "",
    },
  },
  methods: {
    defaultIcon(n) {
      if (this.icon == n) {
        return true;
      }
    },
    defaultAllowed() {
      if (this.isAllowed == false) {
        this.defaultAllowed = "notAllowed";
      }
    },
  },
  created() {
    this.defaultAllowed();
  },
};
</script>
<style scoped>
.button {
  width: 120px;
  height: 40px;
  background-color: #1890ff;
  border-width: 1px;
  border-radius: 10px;
  color: #fff;
  background-color: #1890ff;
  border-color: #1890ff;
  text-shadow: 0 -1px 0 rgb(0 0 0 / 12%);
  box-shadow: 0 2px 0 rgb(0 0 0 / 5%);
}
.small {
  width: 100px;
  height: 40px;
}
.Middle {
  width: 140px;
  height: 40px;
}
.buttonBox {
  background-color: rgb(255, 255, 255);
  display: inline;
  position: relative;
  float: inherit;
}
.notAllowed {
  opacity: 0.6;
  cursor: not-allowed;
}
</style>