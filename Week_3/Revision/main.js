document.addEventListener("DOMContentLoaded", () => {
  const groups = document.querySelectorAll(".image-group");
  let index = 0;

  setInterval(() => {
    groups[index].classList.remove("active");

    index = (index + 1) % groups.length;

    groups[index].classList.add("active");
  }, 4000);
});