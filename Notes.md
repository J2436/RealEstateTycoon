# Classes: 
## Property
       Attributes:
        - Property Value
        - Location
        - Mortgage
        - Length of mortgage (in turns)
        - Property Tax (1.5%)
        - Tenant(s)
        - Rooms 
        - Rent
### House
    - Can only be rented by one tenant
    - Value >= 100,000

### Apartment 
    - Can collect rent on each aparment in the complex at the same rate
    - Value >= 300,000
    - Max 10 room
    Functions: 
        - Collect rent 
### Business Complex 
    - Has spaces of various sizes and rent values, can have multiple tenants
    - Value >= 400,000
    - Max 5 
    - Each business that pays rent in a complex increses the property value by 1% each turn

## Player
    Attributes:
            - Money (Start with 500,000)
            - Properties Owned (Start with 0)
    Functions:
            - Pay debt and taxes
            - Sell property
            - Collect rent
            - Raise/Lower rent on a property

## Tenant 
    Attributes:
        - Budget
        - Agreeability score  (1-5)
        - If rent is raised above a tenants budget & their agreeability score is less than 2, the will refuse to pay rent and continue ocuppying the property until rent is lowered to their budget.
### Citizen
    - Budget: 500 to 5000
        - Can ocuppy houses and aparments but not business complexes
### Business
        - Budget: 2000 to 10000
        - Can only ocuppy business complexes
        - Each business that pays rent in a complex increases property value by 1% each turn