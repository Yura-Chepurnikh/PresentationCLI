#ifndef BOX_HPP
#define BOX_HPP

#include <iostream>

// composite pattern 
namespace Box 
{
    // interface 
    class Component 
    {
    public:
        virtual void render() = 0;
        virtual ~Component() = default;
    };

    // composite
    class BoxGroup : public Component 
    {
    public:
        void render() override;
    };

    // leaf
    class IBox : public Component
    {
    public:
        struct RelativePos 
        {
            RelativePos(float x = 0.0f, float y = 0.0f);
            float x, y;
        };

        explicit IBox
        (
            const RelativePos& pos = RelativePos(), 
            float width = float(),
            float height = float()
        );

        void render() override;
        
        // getters 
        RelativePos getRelativePos();
        RelativePos const getRelativePos() const;

        float getWidth();
        float const getWidth() const;

        float getHeight();
        float const getHeight() const;

    private:
        RelativePos m_relativePos;
        float m_width, m_height;
    };

    class PictureBox : public IBox 
    {
    public:
        void render() override;
    };

    class TextBox : public IBox 
    {
    public:
        void render() override;
    };

    class VideoBox : public IBox 
    {
    public:
        void render() override;
    };
}

#endif // BOX_HPP