//Week 1 Review

#include <iostream>
using namespace std;

typedef unsigned short int USHORT;
typedef unsigned long int ULONG;
enum BOOL { FALSE, TRUE };
enum CHOICE { DrawRect = 1, GetArea, GetPerim, ChangeDimensions, GetDimensions, Quit };

// Rectangle Class Declaration
class Rectangle {
 public:
  Rectangle(USHORT width, USHORT height);
  ~Rectangle();

  USHORT GetHeight() const { return itsHeight; }
  USHORT GetWidth() const { return itsWidth; }
  ULONG GetArea() const { return itsHeight * itsWidth; }
  ULONG GetPerim() const { return 2 * itsHeight + 2 * itsWidth; }
  void SetSize(USHORT newWidth, USHORT newHeight);

  void DrawShape() const;

 private:
  USHORT itsWidth;
  USHORT itsHeight;
};

// Class method implementations
void Rectangle::SetSize(USHORT newWidth, USHORT newHeight) {
  itsWidth = newWidth;
  itsHeight = newHeight;
}

Rectangle::Rectangle(USHORT width, USHORT height) {
  itsWidth = width;
  itsHeight = height;
}

Rectangle::~Rectangle() {}

USHORT DoMenu();

void DoDrawRect(Rectangle);
void DoGetArea(Rectangle);
void DoGetPerim(Rectangle);
void DoGetDimensions(Rectangle);

void main() {
  
  Rectangle theRect(30, 5);

  USHORT choice = DrawRect;
  USHORT fQuit = FALSE;

  while (!fQuit) {
    choice = DoMenu();
    if (choice < DrawRect || choice > Quit) {
      cout << "\nInvalid Choice, please try again.\n\n";
    }
    switch (choice){
      case DrawRect:
        DoDrawRect(theRect);
        break;
      case GetArea:
        DoGetArea(theRect);
        break;
      case GetPerim:
        DoGetPerim(theRect);
        break;
      case ChangeDimensions:
        USHORT newLength, newWidth;
        cout << "\nNew width: ";
        cin >> newWidth;
        cout << "New height: ";
        cin >> newLength;
        theRect.SetSize(newWidth, newLength);
        DoDrawRect(theRect);
        break;
      case GetDimensions:
        DoGetDimensions(theRect);
        break;
      case Quit:
        fQuit = TRUE;
        cout << "\nExiting...\n\n";
        break;
      default:
        cout << "Error in choice!\n";
        fQuit = TRUE;
        break;
    } // end switch
  } // end while
} // end int main(int argc, char const *argv[])

USHORT DoMenu() {
  USHORT choice;
    cout << "\n\n   *** Menu *** \n";
    cout << "(1) Draw Rectangle\n";
    cout << "(2) Area\n";
    cout << "(3) Perimeter\n";
    cout << "(4) Resize\n";
    cout << "(5) Dimensions\n";
    cout << "(6) Quit\n";
  cin >> choice;
  return choice;
}

void DoDrawRect(Rectangle theRect) {
  USHORT height = theRect.GetHeight();
  USHORT width = theRect.GetWidth();

  for (USHORT i = 0; i<height; i++){
    for (USHORT j = 0; j<width; j++)
      cout << "*";
    cout << "\n";
  }
}

void DoGetArea(Rectangle theRect) { cout << "Area: " << theRect.GetArea() << endl; }

void DoGetPerim(Rectangle theRect) { cout << "Perimeter: " << theRect.GetPerim() << endl; }

void DoGetDimensions(Rectangle theRect) { cout << "Width: " << theRect.GetWidth() << " Height: " << theRect.GetHeight() << endl; }