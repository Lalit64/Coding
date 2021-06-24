import "../styles/globals.css";
import "../components/styles.css"
import "tailwindcss/tailwind.css";

function MyApp({ Component, pageProps }) {
  return <Component {...pageProps} />;
}

export default MyApp;
