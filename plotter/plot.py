import matplotlib.pyplot as plt
import pandas as pd
import seaborn as sns

sns.set_theme(style="whitegrid", palette="pastel")

def main():
    df = pd.read_csv("../pidController/src/output.csv")
    df.insert(0, 'idx', range(0, len(df)))
    fig = sns.lineplot(data=df, x = "idx", y = "correction")
    plt.axhline(y = 55, color = 'r', linestyle = '-') 
    plt.title("Untuned PID Controller - Start Value = 1000; Set Value = 55")
    plt.show()
    line_fig = fig.get_figure()
    line_fig.savefig('untuned_pid.png')

if __name__== "__main__":
    main()