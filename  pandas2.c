{
 "cells": [
  {
   "cell_type": "code",
   "execution_count": 4,
   "id": "86cd6f6c",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "DataFrame. apply functions \n",
      "\n",
      "\n",
      " Original DataFrame=\n",
      "    S  R\n",
      "0  3  9\n",
      "1  3  9\n",
      "2  3  9\n",
      "3  3  9\n",
      "\n",
      "Square root of DataFrames:\n",
      "           S    R\n",
      "0  1.732051  3.0\n",
      "1  1.732051  3.0\n",
      "2  1.732051  3.0\n",
      "3  1.732051  3.0\n",
      "\n",
      " Sum of columns:\n",
      " S    12\n",
      "R    36\n",
      "dtype: int64\n",
      "\n",
      " Sum of rows:\n",
      " 0    12\n",
      "1    12\n",
      "2    12\n",
      "3    12\n",
      "dtype: int64\n"
     ]
    }
   ],
   "source": [
    "import pandas as pd\n",
    "import numpy as np\n",
    "print(\"DataFrame. apply functions \\n\")\n",
    "info = pd.DataFrame([[3,9]]*4,columns=['S','R'])\n",
    "print('\\n Original DataFrame=\\n',info)\n",
    "print('\\nSquare root of DataFrames:\\n',info.apply(np.sqrt))\n",
    "print('\\n Sum of columns:\\n',info.apply(np.sum,axis=0))\n",
    "print('\\n Sum of rows:\\n',info.apply(np.sum,axis=1))"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "9cf0abcc",
   "metadata": {},
   "outputs": [],
   "source": []
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "5fab14a9",
   "metadata": {},
   "outputs": [],
   "source": []
  }
 ],
 "metadata": {
  "kernelspec": {
   "display_name": "Python 3 (ipykernel)",
   "language": "python",
   "name": "python3"
  },
  "language_info": {
   "codemirror_mode": {
    "name": "ipython",
    "version": 3
   },
   "file_extension": ".py",
   "mimetype": "text/x-python",
   "name": "python",
   "nbconvert_exporter": "python",
   "pygments_lexer": "ipython3",
   "version": "3.11.4"
  }
 },
 "nbformat": 4,
 "nbformat_minor": 5
}
