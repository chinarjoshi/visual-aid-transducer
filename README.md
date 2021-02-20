[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]

<!-- PROJECT LOGO -->
<br />

<p align="center">
  <a href="https://github.com/chinarjoshi/visual-aid-transducer">
    <img src="Visual/Logo.png" alt="Logo" width="500" height="300">
  </a>

  <h1 align="center">Visual Aid Transducer</h1>

  <p align="center">
    Transduce one's surroundings to haptic feedback.
    <br />
    <a href="https://github.com/chinarjoshi/visual-aid-transducer"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://youtu.be/v6lsjcFfK9Q">View Demo</a>
    ·
    <a href="https://github.com/chinarjoshi/visual-aid-transducer">Report Bug</a>
    ·
    <a href="https://github.com/chinarjoshi/visual-aid-transducer">Request Feature</a>
  </p>
</p>

<!-- TABLE OF CONTENTS -->
<details open="open">
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgements">Acknowledgements</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

<p align="center">
  <a href="https://github.com/chinarjoshi/visual-aid-transducer">
    <img src="images/deaths.png" alt="example-image" width=900 height=600>
  </a>
</p>



### Inspiration
One of our team member's grandparents has become visually impaired, so we had the idea to create a wearable gadget to help people like him navigate the world.

### What it does
This is a wearable gadget that transduces the distance of obstacles to a 

### How we built it
The device consists of 3 main parts: a 3d printed cast to hold the electronics in the shape of a neckband, an arduino circuit to combine ultrasonic sensors, haptic feedback motors, and the microcontroller, and finally the program to create the actual function. 

### Challenges we ran into
It was difficult to actually find the data in a usable form online, because it was either fragmented or contained irrelevant data to my purpose. This introduced me to the pandas libraries to clean and filter the dataset. I've also never worked with visualizations of datasets before, so the hardest part was actually starting.

### Accomplishments that we're proud of
I created my first deployable web API and made a visually appealing application to solve a real world problem, while introducing me to data science concepts along the way.

### Built With

* [Arduino](https://plotly.com/dash)
* [Adafruit Motorshield](https://getbootstrap.com)


## Getting Started

No API key is needed to access the tool, so the application may be locally run through the python file.

### Prerequisites

The prerequisite frameworks and libraries are dash, plotly, and pandas.
* pip
  ```sh
  pip install requirements.txt
  ```

<!-- USAGE EXAMPLES -->
## Usage

<p align="center">
  <a href="https://github.com/chinarjoshi/visual-aid-transducer">
    <img src="images/original.png" alt="example-image" width=900 height=600>
  </a>
</p>

This tool can be used for research purposes to find the exact number of cases in a specific county on any day. It is useful to see the patterns of infection and death rate increases/decreases. For example, it can be seen that the number of infections skyrocketed in early January after the holiday season. The tool is useful for establishing patterns such as this.

_For more examples, please refer to the [Documentation](https://github.com/chinarjoshi/visual-aid-transducer)_

<!-- ROADMAP -->
## Roadmap

__See the [open issues](https://github.com/chinarjoshi/visual-aid-transducer) for a list of proposed features (and known issues).__
<br>

The following features will be implemented in the indefinite future:
1. Expanded dataset to include:
    - Mask usage
    - Population Density
    - Demographic breakdown
2.  Dark theme
3.  An option to use the program in the command line


<!-- CONTRIBUTING -->
## Contributing

Any contributions to extend features are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/newFeature`)
3. Commit your Changes (`git commit -m 'Add NewFeature'`)
4. Push to the Branch (`git push origin feature/newFeature`)
5. Open a Pull Request

<!-- CONTACT -->
## Contact

Chinar Joshi - chinarjoshi7@gmail.com

Project Link: [https://github.com/cjoshi7/covid19-date-selector](https://github.com/chinarjoshi/visual-aid-transducer)


## Acknowledgements
* [Readme Template](https://github.com/othneildrew/Best-README-Template)
* [Img Shields](https://shields.io)
* [GitHub Pages](https://pages.github.com)
* [Animate.css](https://daneden.github.io/animate.css)
* [Loaders.css](https://connoratherton.com/loaders)

<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/chinarjoshi/visual-aid-transducer?style=for-the-badge
[contributors-url]: https://github.com/chinarjoshi/visual-aid-transducer/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/chinarjoshi/visual-aid-transducer?style=for-the-badge
[forks-url]: https://github.com/chinarjoshi/visual-aid-transducer/network/members
[stars-shield]: https://img.shields.io/github/stars/chinarjoshi/visual-aid-transducer?style=for-the-badge
[stars-url]: https://github.com/chinarjoshi/visual-aid-transducer/stargazers
[issues-shield]: https://img.shields.io/github/issues/chinarjoshi/visual-aid-transducer?style=for-the-badge
[issues-url]: https://github.com/chinarjoshi/visual-aid-transducer/issues
[license-shield]: https://img.shields.io/github/license/chinarjoshi/visual-aid-transducer?style=for-the-badge
[license-url]: https://github.com/chinarjoshi/visual-aid-transducer/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/in/chinar-joshi-905493207/
[product-screenshot]: images/screenshot.png
