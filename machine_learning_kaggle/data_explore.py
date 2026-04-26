import pandas as pd

melbourne_path = 'melb_data.csv'

melbourne_data = pd.read_csv(melbourne_path)

print(melbourne_data.describe())
