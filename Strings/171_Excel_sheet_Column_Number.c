int titleToNumber(string columnTitle) {

        int col_Number = 0;
        int strSize = strlen(columnTitle);

        for (int i = 0; i < strSize; i++) {
            char ch = columnTitle[i];
            int currVal = ch - 'A' + 1;
            col_Number = col_Number * 26 + currVal;
        }

        return col_Number;
    }
